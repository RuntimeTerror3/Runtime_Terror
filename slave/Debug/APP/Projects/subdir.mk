################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../APP/Projects/Projects.c 

OBJS += \
./APP/Projects/Projects.o 

C_DEPS += \
./APP/Projects/Projects.d 


# Each subdirectory must supply rules for building sources it contributes
APP/Projects/%.o: ../APP/Projects/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"D:\CU\Others\AMIT\Projects\slave\APP" -I"D:\CU\Others\AMIT\Projects\slave\HAL\AT24C16A" -I"D:\CU\Others\AMIT\Projects\slave\HAL\AT24C16A" -I"D:\CU\Others\AMIT\Projects\slave\MCAL\I2C" -I"D:\CU\Others\AMIT\Projects\slave\MCAL\SPI" -I"D:\CU\Others\AMIT\Projects\slave\MCAL\UART" -I"D:\CU\Others\AMIT\Projects\slave\HAL\Servo" -I"D:\CU\Others\AMIT\Projects\slave\HAL\DCMotor" -I"D:\CU\Others\AMIT\Projects\slave\MCAL\WDT" -I"D:\CU\Others\AMIT\Projects\slave\MCAL\GIE" -I"D:\CU\Others\AMIT\Projects\slave\MCAL\Timer" -I"D:\CU\Others\AMIT\Projects\slave\HAL\LM35" -I"D:\CU\Others\AMIT\Projects\slave\MCAL\ADC" -I"D:\CU\Others\AMIT\Projects\slave\HAL\KeyPad" -I"D:\CU\Others\AMIT\Projects\slave\MCAL\EXT_INT" -I"D:\CU\Others\AMIT\Projects\slave\HAL\LCD" -I"D:\CU\Others\AMIT\Projects\slave\APP\Projects" -I"D:\CU\Others\AMIT\Projects\slave\HAL\SSD" -I"D:\CU\Others\AMIT\Projects\slave\HAL\PB" -I"D:\CU\Others\AMIT\Projects\slave\HAL\Buzzer" -I"D:\CU\Others\AMIT\Projects\slave" -I"D:\CU\Others\AMIT\Projects\slave\HAL" -I"D:\CU\Others\AMIT\Projects\slave\MCAL" -I"D:\CU\Others\AMIT\Projects\slave\MCAL\DIO" -I"D:\CU\Others\AMIT\Projects\slave\HAL\LED" -Wall -g2 -gstabs -O1 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


