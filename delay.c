/*
 * File:   delay.c
 * Author: 20185076
 *
 * Created on 17 de Fevereiro de 2021, 17:41
 */

#include <xc.h>
#include "config.h"

void delay( unsigned int t )
{
    while( t )
    {
        __delay_ms(1);
        --t;
    }
}
