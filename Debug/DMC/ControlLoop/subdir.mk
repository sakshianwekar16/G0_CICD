################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DMC/ControlLoop/controlLoop.c 

OBJS += \
./DMC/ControlLoop/controlLoop.o 

C_DEPS += \
./DMC/ControlLoop/controlLoop.d 


# Each subdirectory must supply rules for building sources it contributes
DMC/ControlLoop/%.o DMC/ControlLoop/%.su DMC/ControlLoop/%.cyclo: ../DMC/ControlLoop/%.c DMC/ControlLoop/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G030xx -DUSE_FULL_LL_DRIVER -c -I"D:/Projects/CI_CD/G0_CICD/DMC/Headerfile" -I../Core/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G0xx/Include -I../Drivers/CMSIS/Include -O2 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-DMC-2f-ControlLoop

clean-DMC-2f-ControlLoop:
	-$(RM) ./DMC/ControlLoop/controlLoop.cyclo ./DMC/ControlLoop/controlLoop.d ./DMC/ControlLoop/controlLoop.o ./DMC/ControlLoop/controlLoop.su

.PHONY: clean-DMC-2f-ControlLoop

