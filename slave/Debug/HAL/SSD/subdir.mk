################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/SSD/SSD_Prog.c 

OBJS += \
./HAL/SSD/SSD_Prog.o 

C_DEPS += \
./HAL/SSD/SSD_Prog.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/SSD/%.o: ../HAL/SSD/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\minaa\OneDrive\Desktop\task\Runtime_Terror\slave\APP" -I"C:\Users\minaa\OneDrive\Desktop\task\Runtime_Terror\slave\HAL\AT24C16A" -I"C:\Users\minaa\OneDrive\Desktop\task\Runtime_Terror\slave\HAL\AT24C16A" -I"C:\Users\minaa\OneDrive\Desktop\task\Runtime_Terror\slave\MCAL\I2C" -I"C:\Users\minaa\OneDrive\Desktop\task\Runtime_Terror\slave\MCAL\SPI" -I"C:\Users\minaa\OneDrive\Desktop\task\Runtime_Terror\slave\MCAL\UART" -I"C:\Users\minaa\OneDrive\Desktop\task\Runtime_Terror\slave\HAL\Servo" -I"C:\Users\minaa\OneDrive\Desktop\task\Runtime_Terror\slave\HAL\DCMotor" -I"C:\Users\minaa\OneDrive\Desktop\task\Runtime_Terror\slave\MCAL\WDT" -I"C:\Users\minaa\OneDrive\Desktop\task\Runtime_Terror\slave\MCAL\GIE" -I"C:\Users\minaa\OneDrive\Desktop\task\Runtime_Terror\slave\MCAL\Timer" -I"C:\Users\minaa\OneDrive\Desktop\task\Runtime_Terror\slave\HAL\LM35" -I"C:\Users\minaa\OneDrive\Desktop\task\Runtime_Terror\slave\MCAL\ADC" -I"C:\Users\minaa\OneDrive\Desktop\task\Runtime_Terror\slave\HAL\KeyPad" -I"C:\Users\minaa\OneDrive\Desktop\task\Runtime_Terror\slave\MCAL\EXT_INT" -I"C:\Users\minaa\OneDrive\Desktop\task\Runtime_Terror\slave\HAL\LCD" -I"C:\Users\minaa\OneDrive\Desktop\task\Runtime_Terror\slave\HAL\SSD" -I"C:\Users\minaa\OneDrive\Desktop\task\Runtime_Terror\slave\HAL\PB" -I"C:\Users\minaa\OneDrive\Desktop\task\Runtime_Terror\slave\HAL\Buzzer" -I"C:\Users\minaa\OneDrive\Desktop\task\Runtime_Terror\slave" -I"C:\Users\minaa\OneDrive\Desktop\task\Runtime_Terror\slave\HAL" -I"C:\Users\minaa\OneDrive\Desktop\task\Runtime_Terror\slave\MCAL" -I"C:\Users\minaa\OneDrive\Desktop\task\Runtime_Terror\slave\MCAL\DIO" -I"C:\Users\minaa\OneDrive\Desktop\task\Runtime_Terror\slave\HAL\LED" -Wall -g2 -gstabs -O1 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


