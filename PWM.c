#include "PWM.h"
void PWM_generar( unsigned int ciclo, unsigned int frecuencia)
{
    /*PWM Period = [(PR2) + 1] ? 4 ? TOSC ?(TMR2 Prescale Value)
     * PWM Period /(4 * TOSC * TMR2presc) - 1 = PR2
     * FOSC / (4 * FPWM * TMR2Presc) - 1 = PR2
    */           
    TRISCbits.RC1=0;
    
    unsigned int prescalador=1;
    unsigned long PR2cal=_XTAL_FREQ;
    PR2cal=PR2cal/frecuencia;
    PR2cal=PR2cal/4;  
    T2CON=0b00000000;
    while(PR2cal>256)
    {
       prescalador=prescalador*4;
       T2CON++;
       PR2cal=PR2cal/4;
    }
    PR2cal--;
    PR2=PR2cal;
    /*PWM Duty Cycle = (CCPRXL:CCPXCON<5:4>) ? TOSC ? (TMR2 Prescale Value)
     * PWM Duty Cycle = (CCPR1L:CCP1CON<5:4>) ? TOSC ? (TMR2 Prescale Value)
     * (CCPR1L:CCP1CON<5:4>) = PWM Duty Cycle / (TOSC ? (TMR2 Prescale Value))
     * (CCPR1L:CCP1CON<5:4>) = xx%([(PR2) + 1] ? 4 ? TOSC ?(TMR2 Prescale Value)) / (TOSC ? (TMR2 Prescale Value))
     * (CCPR1L:CCP1CON<5:4>) = xx%[(PR2) + 1] ? 4 
     */
    unsigned long AuxCCPR2L=PR2cal;
    AuxCCPR2L++;
    AuxCCPR2L=AuxCCPR2L*ciclo;
    AuxCCPR2L=AuxCCPR2L*4;
    AuxCCPR2L=AuxCCPR2L/100;
    unsigned int AuxCCP2CON= AuxCCPR2L;
    AuxCCP2CON= AuxCCP2CON & 0b00000011 ;
    AuxCCP2CON= AuxCCP2CON*16;//<< 4
    CCP2CON= 0b00001100;
    CCP2CON= CCP2CON|AuxCCP2CON;
    AuxCCPR2L=AuxCCPR2L/4; //>>2
    CCPR2L=AuxCCPR2L;
    T2CONbits.TMR2ON=1;
    TMR2=0;       
}

