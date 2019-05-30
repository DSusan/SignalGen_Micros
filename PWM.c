#include "PWM.h"
void PWM_generar( unsigned int ciclo, unsigned int frecuencia)
{       
    TRISCbits.RC1=0;
    
    unsigned long result_PR2 = _XTAL_FREQ;
    result_PR2=result_PR2/frecuencia;
    result_PR2=result_PR2/4;  
    T2CON=0b00000000;
    while(result_PR2>256)
    {
       T2CON++;
       result_PR2=result_PR2/4;
    }
    result_PR2--;
    PR2=result_PR2;

    unsigned long CCPR2L_aux=result_PR2;
    CCPR2L_aux++;
    CCPR2L_aux=CCPR2L_aux*ciclo;
    CCPR2L_aux=CCPR2L_aux*4;
    CCPR2L_aux=CCPR2L_aux/100;

    unsigned int CCP2CON_aux= CCPR2L_aux;
    CCP2CON_aux= CCP2CON_aux & 0b00000011 ;
    CCP2CON_aux= CCP2CON_aux*16;
    CCP2CON= 0b00001100;
    CCP2CON= CCP2CON|CCP2CON_aux;
    CCPR2L_aux=CCPR2L_aux/4;
    CCPR2L=CCPR2L_aux;

    T2CONbits.TMR2ON=1;
    TMR2=0;       
}

