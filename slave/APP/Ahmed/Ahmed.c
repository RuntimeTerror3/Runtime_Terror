/*
 * Ahmed.c
 *
 *  Created on: Oct 4, 2022
 *      Author: HODA2
 */

#include "Ahmed.h"

void H_HC05_Void_Check_Admin_Or_User(void)
{

	u8 x[16]={'E','N','T','E','R',' ','U','S','E','R','N','A','M','E',':'};
	u8 y[5] = {'A','H','M','E','D'};
	u8 z[5];
	u8 a[13] ={'W','E','L','C','O','M','E',' ','A','D','M','I','N'};

	u8 i,j,k;
	for(i=0;i<15;i++)
	{
		M_UART_Void_UARTSend(x[i]);
		_delay_ms(10);
	}

	for(j=0;j<5;j++)
	{
		z[j] = M_UART_Void_UARTRec();
		_delay_ms(10);
		if(z[j] == y[j])
		{
			for(k=0;k<13;k++)
			{
				M_UART_Void_UARTSend(a[k]);
				_delay_ms(10);
			}
			break;
		}

	}

}
void H_HCO5_Admin_Commands(void)
{
	u8 q = 0;
		q = M_UART_Void_UARTRec();
		_delay_ms(100);
			switch(q)
			{
			case 'C' : H_LED_Void_LedSetOn(LED0);          break;
			case 'D' : H_LED_Void_LedSetOff(LED0);         break;
			case 'E' : H_LED_Void_LedSetOn(LED1);          break;
			case 'F' : H_LED_Void_LedSetOff(LED1);         break;
			case 'G' : H_LED_Void_LedSetOn(LED2);          break;
			case 'H' : H_LED_Void_LedSetOff(LED2);         break;
			case 'I' : H_Buzzer_Void_BuzzerSetOn();        break;
			case 'J' : H_Buzzer_Void_BuzzerSetOff();       break;
			default:  break;
			}


}


