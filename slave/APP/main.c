/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#include "EXT_INT_Interface.h"
#include "KeyPad_Interface.h"
#include "LCD_Interface.h"
#include "LM35_Interface.h"
#include "Timer_Interface.h"
#include "GIE_Interface.h"
#include "DCMotor_Interface.h"
#include "Servo_Interface.h"
#include "ADC_Interface.h"
#include "WDT_Interface.h"
#include "AT24C16A_Interface.h"
#include "SPI_Interface.h"
#include "UART_Interface.h"
#include "LED_Interface.h"
#include "Buzzer_Interface.h"

void A_EXT_INT0_Execution(void);
void A_Timer0_Execution(void);
u8 A_LCD_Execution(void);
void A_UART_Void_UARTExecution(void);
void A_KeyPad_Execution(u8*);

u32 Global_A_U32_Timer_s;
static u8 Global_A_U8_UARTINT=0;

int main()
{
	H_LED_Void_LedInit(LED1);
	H_LED_Void_LedInit(LED2);
	H_AT24C16A_Void_EEPROMInit();
	M_GIE_Void_GlobalInterruptEnable();
	M_Timer_Void_TimerInit(TIMER0_CHANNEL);
	H_KeyPad_Void_KeyPadInit();
	M_UART_Void_UARTInit();
	H_LCD_Void_LCDInit();
	H_LED_Void_LedInit(LED1);
	H_LCD_Void_SetCallBack(A_LCD_Execution);
	M_Timer_Void_TimerSetTime(TIMER0_CHANNEL,1000);
	M_Timer_Void_SetCallBack(TIMER0_CHANNEL,A_Timer0_Execution);
	M_Timer_Void_TimerStart(TIMER0_CHANNEL);
	M_UART_Void_UARTSetCallBack(A_UART_Void_UARTExecution);
	H_KeyPad_Void_SetCallBack(A_KeyPad_Execution);

	u8 Local_U8_Options=0;
	u8 *Local_U8_ArrUserPtr;
	Local_U8_Options = H_LCD_Void_LCDWelcome();
	H_LCD_Void_LCDClear();
	if(Local_U8_Options>=48 && Local_U8_Options<=57)
	{
		Local_U8_ArrUserPtr=H_KeyPad_U8_KeyPadGetUser(Local_U8_Options);
		H_AT24C16A_U8_EEPROMUserCheck(Local_U8_ArrUserPtr);
	}
	else if(Local_U8_Options>=65 && Local_U8_Options<=68)
	{
		Local_U8_ArrUserPtr=H_KeyPad_U8_KeyPadGetUser(Local_U8_Options);
		H_AT24C16A_U8_EEPROMUserCheck(Local_U8_ArrUserPtr);
	}
	else if(Local_U8_Options==42 || Local_U8_Options==35)
	{
		Local_U8_ArrUserPtr=H_KeyPad_U8_KeyPadGetUser(Local_U8_Options);
		H_AT24C16A_U8_EEPROMUserCheck(Local_U8_ArrUserPtr);
	}

}

void A_UART_Void_UARTExecution(void)
{
	Global_A_U8_UARTINT=UDR_REG;
	switch(Global_A_U8_UARTINT)
	{
	case 33:
		H_LCD_Void_LCDClear();
		H_LCD_Void_LCDGoTo(0,0);
		H_LCD_Void_LCDWriteString("UserName:");
		u8 Local_U8_ArrUser[]="shit";
		M_UART_Void_UARTSendString(4,"shit");
		M_UART_Void_UARTSend(80);
		_delay_ms(1);
		M_UART_Void_UARTSend(108);
		_delay_ms(1);
		M_UART_Void_UARTSend(101);
		_delay_ms(1);
		M_UART_Void_UARTSend(97);
		_delay_ms(1);
		M_UART_Void_UARTSend(115);
		H_Buzzer_Void_BuzzerOnce();
		_delay_ms(1);
		M_UART_Void_UARTSend(101);
		_delay_ms(1);
		M_UART_Void_UARTSend(44);
		_delay_ms(1);
		M_UART_Void_UARTSend(32);
		_delay_ms(1);
		M_UART_Void_UARTSend(101);
		_delay_ms(1);
		M_UART_Void_UARTSend(110);
		_delay_ms(1);
		M_UART_Void_UARTSend(116);
		_delay_ms(1);
		M_UART_Void_UARTSend(101);
		_delay_ms(1);
		M_UART_Void_UARTSend(114);
		_delay_ms(1);
		M_UART_Void_UARTSend(32);
		_delay_ms(1);
		M_UART_Void_UARTSend(85);
		_delay_ms(1);
		M_UART_Void_UARTSend(82);
		_delay_ms(1);
		M_UART_Void_UARTSend(32);
		_delay_ms(1);
		M_UART_Void_UARTSend(117);
		_delay_ms(1);
		M_UART_Void_UARTSend(115);
		_delay_ms(1);
		M_UART_Void_UARTSend(101);
		_delay_ms(1);
		M_UART_Void_UARTSend(114);
		_delay_ms(1);
		M_UART_Void_UARTSend(110);
		_delay_ms(1);
		M_UART_Void_UARTSend(97);
		_delay_ms(1);
		M_UART_Void_UARTSend(109);
		_delay_ms(1);
		M_UART_Void_UARTSend(101);
		_delay_ms(1);
		M_UART_Void_UARTSend(58);




		break;
	case 34:
		break;
	case 36:
		break;
	case 37:
		break;
	case 38:
		break;
	case 39:
		break;
	case 40:
		break;
	case 41:
		break;
	case 43:
		break;
	case 44:
		break;
	case 45:
		break;
	case 46:
		break;
	case 47:
		break;
	case 58:
		break;
	case 59:
		break;
	case 60:
		break;
	case 61:
		break;
	}
}

u8 A_LCD_Execution(void)
{
	u8 Local_U8_Read=0;
	Local_U8_Read = H_KeyPad_U8_KeyPadRead();
	return Local_U8_Read;
}

void A_KeyPad_Execution(u8* Copy_U8_LCDWrite)
{
	H_LCD_Void_LCDWriteString(Copy_U8_LCDWrite);
}

void A_Timer0_Execution(void)
{
	Global_A_U32_Timer_s++;
}
void A_Timer1_Execution(void)
{
	//H_Buzzer_Void_BuzzerOnce();
	H_LED_Void_LedTog(LED0);
}

void A_EXT_INT0_Execution(void)
{
	H_LED_Void_LedSetOn(LED0);
	H_LCD_Void_LCDWriteCharacter('A');
}




