################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DMC/DMC/ProtectionHandler/Protection.c 

OBJS += \
./DMC/DMC/ProtectionHandler/Protection.o 

C_DEPS += \
./DMC/DMC/ProtectionHandler/Protection.d 


# Each subdirectory must supply rules for building sources it contributes
DMC/DMC/ProtectionHandler/%.o DMC/DMC/ProtectionHandler/%.su DMC/DMC/ProtectionHandler/%.cyclo: ../DMC/DMC/ProtectionHandler/%.c DMC/DMC/ProtectionHandler/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G030xx -DUSE_FULL_LL_DRIVER -c -I../Core/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G0xx/Include -I../Drivers/CMSIS/Include -O2 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-DMC-2f-DMC-2f-ProtectionHandler

clean-DMC-2f-DMC-2f-ProtectionHandler:
	-$(RM) ./DMC/DMC/ProtectionHandler/Protection.cyclo ./DMC/DMC/ProtectionHandler/Protection.d ./DMC/DMC/ProtectionHandler/Protection.o ./DMC/DMC/ProtectionHandler/Protection.su

.PHONY: clean-DMC-2f-DMC-2f-ProtectionHandler

