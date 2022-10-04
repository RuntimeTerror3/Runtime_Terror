/*
 * Mahmoud.c
 *
 *  Created on: Oct 4, 2022
 *      Author: HODA2
 */

#include "Mahmoud.h"
u8 Global_EEPROM_Read;

extern u32 Global_A_U32_Timer_s;
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


u16 Global_Temperature;
void A_Mah_Function(){


	//M_ADC_Void_ADCInit();
	H_LCD_Void_LCDInit();
	H_DCMotor_Void_DCMotorInit();
	H_LM35_Void_LM35Init();
	H_Buzzer_Void_BuzzerInit();

	u16 Global_Temperature= H_LM35_Void_LM35Read();

	H_LCD_Void_LCDWriteNumber(Global_Temperature);
	if(30<=Global_Temperature){

		u32 Local_Counter= 4+Global_A_U32_Timer_s ;

		H_LCD_Void_LCDWriteString("Temperature is high");
		while(Global_A_U32_Timer_s<=Local_Counter){
			H_Buzzer_Void_BuzzerSetOn();
		}
		H_Buzzer_Void_BuzzerSetOff();
	}


}
