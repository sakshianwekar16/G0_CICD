################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DMC/initialconfig.c 

OBJS += \
./DMC/initialconfig.o 

C_DEPS += \
./DMC/initialconfig.d 


# Each subdirectory must supply rules for building sources it contributes
DMC/%.o DMC/%.su DMC/%.cyclo: ../DMC/%.c DMC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G030xx -c -I"D:/DMC_G0/DMC/Headerfile" -I../Core/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G0xx/Include -I../Drivers/CMSIS/Include -O2 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-DMC

clean-DMC:
	-$(RM) ./DMC/initialconfig.cyclo ./DMC/initialconfig.d ./DMC/initialconfig.o ./DMC/initialconfig.su

.PHONY: clean-DMC
