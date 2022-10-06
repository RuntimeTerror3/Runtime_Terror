/*
 * Mahmoud.c
 *
 *  Created on: Oct 4, 2022
 *      Author: HODA2
 */

#include "Mahmoud.h"


void A_Timer0_Execution_1(void);
u8 Global_EEPROM_Read;
u32 A_Global_Counter;
u8   A_Global_Buzzer_flag;
extern u32 Global_A_U32_Timer_s;

#define BUZZER_MODE_ON 1
#define BUZZER_MODE_OFF 0
#define BUZZER_MODE   0


void try_E2PROM(){



	H_AT24C16A_Void_EEPROMInit();
	H_LCD_Void_LCDInit();
	Global_EEPROM_Read = H_AT24C16A_Void_EEPROMRead(5,12);
	while(1)
	{	if(255==Global_EEPROM_Read){
			Global_EEPROM_Read=0;

	}
	H_LCD_Void_LCDWriteNumber(Global_EEPROM_Read);
	_delay_ms(1000);
	Global_EEPROM_Read++;
	H_LCD_Void_LCDClear();
	H_AT24C16A_Void_EEPROMWrite(5,12,Global_EEPROM_Read);

	}

}


void A_Mah_Function(){


	//M_ADC_Void_ADCInit();



	//H_LCD_Void_LCDWriteNumber(Global_Temperature);
	// _delay_ms(1000);
	//H_LCD_Void_LCDWriteNumber(Global_A_U32_Timer_s);

	//H_LCD_Void_LCDGoTo(0,0);
	//H_LCD_Void_LCDWriteNumber(Global_Temperature);
	M_Timer_Void_SetCallBack(TIMER0_CHANNEL_2,A_Timer0_Execution_1);





		//H_LCD_Void_LCDWriteString("Temperature is high");
#if BUZZER_MODE_ON==BUZZER_MODE
			if(BUZZER_OFF==A_Global_Buzzer_flag)
			{
		A_Global_Counter=5+Global_A_U32_Timer_s;
		A_Global_Buzzer_flag=1;

		M_Timer_Void_SetCallBack(TIMER0_CHANNEL_2,A_Timer0_Execution_2);
			}


#endif



}

//void A_Timer0_Execution_1(void)
//{
//
//
//	u16 Local_Temperature=0;
//
//	Local_Temperature= H_LM35_Void_LM35Read();
//
//	if(HIGH_TEMPERATURE<=Local_Temperature)
//		{
//
//			H_DCMotor_Void_DCMotorStart();
//		}
//	else if (LOW_TEMPERAUTRE >=Local_Temperature)
//		{
//			H_DCMotor_Void_DCMotorStop();
//		}
//

//}
#if BUZZER_MODE_ON==BUZZER_MODE
void A_Timer0_Execution_2(void)
{


	if(BUZZER_ON==A_Global_Buzzer_flag)
	{
		if(A_Global_Counter<=Global_A_U32_Timer_s)
		{
			H_Buzzer_Void_BuzzerSetOff();
			A_Global_Buzzer_flag=0;
		}
		else
		{
			H_Buzzer_Void_BuzzerSetOn();
		}
	}
}
#endif
