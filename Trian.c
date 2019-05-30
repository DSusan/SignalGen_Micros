#include "Trian.h"
void  TRI_1()
{
    OSCCON=0b01010111;
    TRISAbits.RA6=0; 
    TRISCbits.RC2=0; 
    int sinValues [20];
    int x , aux;
    aux=0;
    for ( x = 0; x <20; x++)
    {
        if (x<10)
        {
            aux -=10;
        }
        else
        {
            aux +=10;
        }
        sinValues[x]=aux;
        
    }
    

    int i, j,k;
    for (i=0;i<20;i++)
    {    
        sinValues [i]=sinValues [i];
    }
    
    while(1)
    {
       
        for (i=0;i<20;i++)
        {    
            for (j=0;j<sinValues[i];j++)
            {
               PORTCbits.RC2=1;
               PORTAbits.RA6=1;
            }
            k=100-sinValues[i];
            for (j=0;j<k;j++)
            {
                PORTCbits.RC2=0;
                PORTAbits.RA6=0;
            }
        }

    return;
    }
}
void  TRI_2()
{
    OSCCON=0b01010111;
    TRISAbits.RA0=0; 
    TRISCbits.RC2=0; 
    int sinValues [20];
    int x , aux;
    aux=0;
    for ( x = 0; x <20; x++)
    {
        if (x<10)
        {
            aux -=10;
        }
        else
        {
            aux +=10;
        }
        sinValues[x]=aux;
        
    }
    int i, j,k;
    for (i=0;i<20;i++)
    {    
        sinValues [i]=sinValues [i]/2;
    }
    
    while(1)
    {
       
        for (i=0;i<20;i++)
        {    
            for (j=0;j<sinValues[i];j++)
            {
                PORTCbits.RC2=1;
                PORTAbits.RA6=1;
            }
            k=100/2-sinValues[i];
            for (j=0;j<k;j++)
            {
               PORTCbits.RC2=0;
                PORTAbits.RA6=0;
            }
        }

    return;
    }
}
void  TRI_3()
{
    OSCCON=0b01010111;
    TRISAbits.RA6=0; 
    TRISCbits.RC2=0; 
    int sinValues [20];
    int x , aux;
    aux=0;
    for ( x = 0; x <20; x++)
    {
        if (x<10)
        {
            aux -=10;
        }
        else
        {
            aux +=10;
        }
        sinValues[x]=aux;
        
    }
    int i, j,k;
    for (i=0;i<20;i++)
    {    
        sinValues [i]=sinValues [i]/4;
    }
    
    while(1)
    {

        for (i=0;i<20;i++)
        {    
            for (j=0;j<sinValues[i];j++)
            {
                PORTCbits.RC2=1;
                PORTAbits.RA6=1;
            }
            k=100/4-sinValues[i];
            for (j=0;j<k;j++)
            {
                 PORTCbits.RC2=0;
                PORTAbits.RA6=0;
            }
        }

    return;
    }
}