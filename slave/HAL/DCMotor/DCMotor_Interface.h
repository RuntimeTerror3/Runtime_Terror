/*
 * DCMotor_Interface.h
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#ifndef HAL_DCMOTOR_DCMOTOR_INTERFACE_H_
#define HAL_DCMOTOR_DCMOTOR_INTERFACE_H_

#include "DCMotor_Config.h"
#include "DIO_Interface.h"
#include "Timer_Interface.h"

#define ACW          0
#define CW           1
#define WITH_PWM 		1
#define  WITHOUT_PWM	0

void H_DCMotor_Void_DCMotorInit(u8);
void H_DCMotor_Void_DCMotorSetSpeed(u32);
void H_DCMotor_Void_DCMotorSetDirection(u8);
void H_DCMotor_Void_DCMotorStart(u8);
void H_DCMotor_Void_DCMotorStop(u8);

#endif /* HAL_DCMOTOR_DCMOTOR_INTERFACE_H_ */
