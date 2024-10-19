################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DMC/Cruise_control/cruiseControl.c 

OBJS += \
./DMC/Cruise_control/cruiseControl.o 

C_DEPS += \
./DMC/Cruise_control/cruiseControl.d 


# Each subdirectory must supply rules for building sources it contributes
DMC/Cruise_control/%.o DMC/Cruise_control/%.su DMC/Cruise_control/%.cyclo: ../DMC/Cruise_control/%.c DMC/Cruise_control/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G030xx -DUSE_FULL_LL_DRIVER -c -I"D:/DMC_G0/DMC/Headerfile" -I../Core/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G0xx/Include -I../Drivers/CMSIS/Include -O2 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-DMC-2f-Cruise_control

clean-DMC-2f-Cruise_control:
	-$(RM) ./DMC/Cruise_control/cruiseControl.cyclo ./DMC/Cruise_control/cruiseControl.d ./DMC/Cruise_control/cruiseControl.o ./DMC/Cruise_control/cruiseControl.su

.PHONY: clean-DMC-2f-Cruise_control

