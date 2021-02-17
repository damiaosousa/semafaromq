/*
 * File:   main.c
 * Author: DAMIÃO DE SOUSA ALVES 
 *
 * Created on 17 de Fevereiro de 2021, 16:43
 */

#include "config.h"
#include <xc.h>
#define VERDE        PORTDbits.RD5
#define AMARELO      PORTDbits.RD6
#define VERMELHO     PORTDbits.RD7
#define VERDEPED     PORTDbits.RD2
#define VERMELHOPED  PORTDbits.RD3
#define BOTAO        PORTDbits.RD1

void semafaro_init(void) 
{
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD7 = 0;
    TRISDbits.TRISD3 = 0;
    TRISDbits.TRISD2 = 0;
    TRISDbits.TRISD1 = 1;
    
    VERDE = 0;
    AMARELO = 0;
    VERMELHO = 0;
}
void main (void)
{
    int estado = 0;
    int t;
    while( 1 )
    {
        switch( estado )
        {
            case 0: 
                    estado = 1;
                    break;
            case 1:
                    semafaro_init();
                    estado = 2;
            case 2:
                    vermelho(0);
                    amarelo(0);
                    verde(1);
                    verdeped(0);
                    vermelhoped(0);
                    if( botaopedestre() == 1 )
                    estado = 3;
                    break;
            case 3:
                    t = 3000;
                    estado = 4;
                    break;
            case 4:
                delay()
            case 5:
            case 6:
            case 7:
            case 8:
        }
    }
}