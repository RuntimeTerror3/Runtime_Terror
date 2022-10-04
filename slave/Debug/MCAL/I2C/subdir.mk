################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/I2C/I2C_Prog.c 

OBJS += \
./MCAL/I2C/I2C_Prog.o 

C_DEPS += \
./MCAL/I2C/I2C_Prog.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/I2C/%.o: ../MCAL/I2C/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\HODA2\Downloads\Mahmoud's Project Template\run time terror 3\Runtime_Terror\slave\APP" -I"C:\Users\HODA2\Downloads\Mahmoud's Project Template\run time terror 3\Runtime_Terror\slave\APP\Mahmoud" -I"C:\Users\HODA2\Downloads\Mahmoud's Project Template\run time terror 3\Runtime_Terror\slave\APP\Ahmed" -I"C:\Users\HODA2\Downloads\Mahmoud's Project Template\run time terror 3\Runtime_Terror\slave\HAL\AT24C16A" -I"C:\Users\HODA2\Downloads\Mahmoud's Project Template\run time terror 3\Runtime_Terror\slave\HAL\AT24C16A" -I"C:\Users\HODA2\Downloads\Mahmoud's Project Template\run time terror 3\Runtime_Terror\slave\MCAL\I2C" -I"C:\Users\HODA2\Downloads\Mahmoud's Project Template\run time terror 3\Runtime_Terror\slave\MCAL\SPI" -I"C:\Users\HODA2\Downloads\Mahmoud's Project Template\run time terror 3\Runtime_Terror\slave\MCAL\UART" -I"C:\Users\HODA2\Downloads\Mahmoud's Project Template\run time terror 3\Runtime_Terror\slave\HAL\Servo" -I"C:\Users\HODA2\Downloads\Mahmoud's Project Template\run time terror 3\Runtime_Terror\slave\HAL\DCMotor" -I"C:\Users\HODA2\Downloads\Mahmoud's Project Template\run time terror 3\Runtime_Terror\slave\MCAL\WDT" -I"C:\Users\HODA2\Downloads\Mahmoud's Project Template\run time terror 3\Runtime_Terror\slave\MCAL\GIE" -I"C:\Users\HODA2\Downloads\Mahmoud's Project Template\run time terror 3\Runtime_Terror\slave\MCAL\Timer" -I"C:\Users\HODA2\Downloads\Mahmoud's Project Template\run time terror 3\Runtime_Terror\slave\HAL\LM35" -I"C:\Users\HODA2\Downloads\Mahmoud's Project Template\run time terror 3\Runtime_Terror\slave\MCAL\ADC" -I"C:\Users\HODA2\Downloads\Mahmoud's Project Template\run time terror 3\Runtime_Terror\slave\HAL\KeyPad" -I"C:\Users\HODA2\Downloads\Mahmoud's Project Template\run time terror 3\Runtime_Terror\slave\MCAL\EXT_INT" -I"C:\Users\HODA2\Downloads\Mahmoud's Project Template\run time terror 3\Runtime_Terror\slave\HAL\LCD" -I"C:\Users\HODA2\Downloads\Mahmoud's Project Template\run time terror 3\Runtime_Terror\slave\HAL\SSD" -I"C:\Users\HODA2\Downloads\Mahmoud's Project Template\run time terror 3\Runtime_Terror\slave\HAL\PB" -I"C:\Users\HODA2\Downloads\Mahmoud's Project Template\run time terror 3\Runtime_Terror\slave\HAL\Buzzer" -I"C:\Users\HODA2\Downloads\Mahmoud's Project Template\run time terror 3\Runtime_Terror\slave" -I"C:\Users\HODA2\Downloads\Mahmoud's Project Template\run time terror 3\Runtime_Terror\slave\HAL" -I"C:\Users\HODA2\Downloads\Mahmoud's Project Template\run time terror 3\Runtime_Terror\slave\MCAL" -I"C:\Users\HODA2\Downloads\Mahmoud's Project Template\run time terror 3\Runtime_Terror\slave\MCAL\DIO" -I"C:\Users\HODA2\Downloads\Mahmoud's Project Template\run time terror 3\Runtime_Terror\slave\HAL\LED" -Wall -g2 -gstabs -O1 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


