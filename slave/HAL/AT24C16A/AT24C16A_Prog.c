/*
 * AT24C16A_Prog.c
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#include "AT24C16A_Interface.h"
#include "LED_Interface.h"

void H_AT24C16A_Void_EEPROMInit(void)
{
	M_I2C_Void_I2CInit();
	_delay_ms(1000);
}
void H_AT24C16A_Void_EEPROMWrite(u8 Copy_U8_Page,u8 Copy_U8_Byte,u8 Copy_U8_Data)
{
	M_I2C_Void_I2CStartCondition();
	M_I2C_Void_I2CSendSlaveAddressWrite(0x50 | Copy_U8_Page);
	M_I2C_Void_I2CSendByte(Copy_U8_Byte);
	M_I2C_Void_I2CSendByte(Copy_U8_Data);
	M_I2C_Void_I2CStopCondition();
}
u8   H_AT24C16A_Void_EEPROMRead(u8 Copy_U8_Page,u8 Copy_U8_Byte)
{
	u8 Local_U8_Reading = 0;
	M_I2C_Void_I2CStartCondition();
	M_I2C_Void_I2CSendSlaveAddressWrite(0x50 | Copy_U8_Page);
	M_I2C_Void_I2CSendByte(Copy_U8_Byte);
	M_I2C_Void_I2CRepeatedStart();
	M_I2C_Void_I2CSendSlaveAddressRead(0x50 | Copy_U8_Page);
	Local_U8_Reading = M_I2C_Void_I2CReadByte();
	M_I2C_Void_I2CStopCondition();
	return Local_U8_Reading;
}

u8   H_AT24C16A_U8_EEPROMUserCheck(u8*Local_U8_ArrPtr)
{
	u8 Local_U8_Arr[4];
	Local_U8_Arr[0]=*Local_U8_ArrPtr;
	if(Local_U8_Arr[0]==H_AT24C16A_Void_EEPROMRead(0,0))
		H_LED_Void_LedTog(LED1);
	Local_U8_Arr[1]=*(Local_U8_ArrPtr+1);
	M_I2C_Void_I2CReInit();
	if(Local_U8_Arr[1]==H_AT24C16A_Void_EEPROMRead(1,0))
		H_LED_Void_LedTog(LED2);
	Local_U8_Arr[2]=*(Local_U8_ArrPtr+2);
	M_I2C_Void_I2CReInit();
	if(Local_U8_Arr[2]==H_AT24C16A_Void_EEPROMRead(2,0))
		H_LED_Void_LedTog(LED1);
	Local_U8_Arr[3]=*(Local_U8_ArrPtr+3);
	M_I2C_Void_I2CReInit();
	if(Local_U8_Arr[3]==H_AT24C16A_Void_EEPROMRead(3,0))
		H_LED_Void_LedTog(LED2);
}

















