#include "SENO.h"

void SENO_1()
{
    OSCCON=0b01010111;
    TRISAbits.RA6=0;
    TRISCbits.RC2=0; 
    int valoresSeno [20]= {50,35,21,10, 2, 0, 2,10, 21, 35, 50, 65, 79, 90, 98, 
    100, 98, 90, 79, 65};
    int i, j,k;
    for (i=0;i<20;i++)
    {    
        valoresSeno [i]=valoresSeno [i];
    }
    while(1)
    {
        for (i=0;i<20;i++){    
            for (j=0;j<valoresSeno[i];j++)
            {
                PORTCbits.RC2=1;
                PORTAbits.RA6=1;
            }
            k=100-valoresSeno[i];
            for (j=0;j<k;j++)
            {
                PORTCbits.RC2=0;
                PORTAbits.RA6=0;
            }
        }
        return;
    }
    
}

void SENO_2(){
 //   OSCCON=0b01010111;
    TRISAbits.RA6=0;
    TRISCbits.RC2=0; 
    int valoresSeno [18]= {50,67,82,93,99,99,93,82,67,50,33,18,7,1,1,7,18,33};
    int i, j,k;
    for (i=0;i<18;i++)
    {    
        valoresSeno [i]=valoresSeno [i];
    }
    while(1)
    {
        for (i=0;i<18;i++){    
            for (j=0;j<valoresSeno[i];j++)
            {
                PORTCbits.RC2=1;
                PORTAbits.RA6=1;
            }
            k=100-valoresSeno[i];
            for (j=0;j<k;j++)
            {
                PORTCbits.RC2=0;
                PORTAbits.RA6=0;
            }
        }
        return;
    }
    
}

void SENO_3()
{
    OSCCON=0b01010111;
    TRISAbits.RA6=0;
    TRISCbits.RC2=0; 
    int valoresSeno [15]= {50,70,87,98,100,93,79,60,40,21,7,0,2,13,30};
    int i, j,k;
    for (i=0;i<15;i++)
    {    
        valoresSeno [i]=valoresSeno [i];
    }
    while(1)
    {
        for (i=0;i<15;i++)
        {    
            for (j=0;j<valoresSeno[i];j++)
            {
                PORTCbits.RC2=1;
                PORTAbits.RA6=1;
            }
            k=100-valoresSeno[i];
            for (j=0;j<k;j++)
            {
                PORTCbits.RC2=0;
                PORTAbits.RA6=0;
            }
        }
        return;
    }
       
}