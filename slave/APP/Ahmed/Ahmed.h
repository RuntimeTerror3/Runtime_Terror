/*
 * Ahmed.h
 *
 *  Created on: Oct 4, 2022
 *      Author: HODA2
 */

#ifndef APP_AHMED_AHMED_H_
#define APP_AHMED_AHMED_H_

#include "UART_Interface.h"

#include <util/delay.h>
#include "DIO_Interface.h"

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
#include  "Buzzer_Interface.h"


void H_HC05_Void_CheckAdmin_Or_User(void);
void H_HCO5_Admin_Commands(void);


#endif /* APP_AHMED_AHMED_H_ */
