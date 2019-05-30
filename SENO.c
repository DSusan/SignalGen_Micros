#include "SENO.h"

void SENO_1()
{
    OSCCON=0b01010111;
    TRISAbits.RA6=0;
    TRISCbits.RC2=0; 

    int sinValues[20]= {50, 35, 21, 10, 2, 0, 2, 10, 21, 35, 50, 65, 79, 90, 98, 100, 98, 90, 79, 65};
    int x, y, z;
    for (x = 0 ; x < 20 ; x++)
    {    
        sinValues[x] = sinValues[x];
    }
    
    while(1)
    {
        for (x = 0 ; x < 20 ; x++){    
            for (y = 0 ; y < sinValues[x] ; y++)
            {
                PORTCbits.RC2 = 1;
                PORTAbits.RA6 = 1;
            }
            z = 100 - sinValues[x];
            for (y = 0 ; y < z ; y++)
            {
                PORTCbits.RC2 = 0;
                PORTAbits.RA6 = 0;
            }
        }
        return;
    }
}

void SENO_2(){
    OSCCON=0b01010111;
    TRISAbits.RA6 = 0;
    TRISCbits.RC2 = 0;

    int sinValues [18]= {50, 67, 82, 93, 99, 99, 93, 82, 67, 50, 33, 18, 7, 1, 1, 7, 18, 33};
    int x, y, z;

    for (x = 0 ; x < 18 ; x++)
    {    
        sinValues [x]=sinValues [x];
    }

    while(1)
    {
        for (x = 0 ; x < 18 ; x++){    
            for (y = 0 ; y < sinValues[x] ; y++)
            {
                PORTCbits.RC2 = 1;
                PORTAbits.RA6 = 1;
            }
            z = 100 - sinValues[x];
            for (y = 0 ; y < z ; y++)
            {
                PORTCbits.RC2 = 0;
                PORTAbits.RA6 = 0;
            }
        }
        return;
    }
}

void SENO_3()
{
    OSCCON = 0b01010111;
    TRISAbits.RA6 = 0;
    TRISCbits.RC2 = 0;

    int sinValues[15] = {50, 70, 87, 98, 100, 93, 79, 60, 40, 21, 7, 0, 2, 13, 30};
    int x, y, z;

    for (x = 0 ; x < 15 ; x++)
    {    
        sinValues[x] = sinValues[x];
    }

    while(1)
    {
        for (x = 0 ; x < 15 ; x++)
        {    
            for (y = 0 ; y < sinValues[x] ; y++)
            {
                PORTCbits.RC2 = 1;
                PORTAbits.RA6 = 1;
            }
            z = 100 - sinValues[x];
            for (y = 0 ; y < z ; y++)
            {
                PORTCbits.RC2 = 0;
                PORTAbits.RA6 = 0;
            }
        }
        return;
    }     
}