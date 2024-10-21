################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DMC/DMC/Auxilaries/Display.c \
../DMC/DMC/Auxilaries/SWS.c \
../DMC/DMC/Auxilaries/pedalAssist.c 

OBJS += \
./DMC/DMC/Auxilaries/Display.o \
./DMC/DMC/Auxilaries/SWS.o \
./DMC/DMC/Auxilaries/pedalAssist.o 

C_DEPS += \
./DMC/DMC/Auxilaries/Display.d \
./DMC/DMC/Auxilaries/SWS.d \
./DMC/DMC/Auxilaries/pedalAssist.d 


# Each subdirectory must supply rules for building sources it contributes
DMC/DMC/Auxilaries/%.o DMC/DMC/Auxilaries/%.su DMC/DMC/Auxilaries/%.cyclo: ../DMC/DMC/Auxilaries/%.c DMC/DMC/Auxilaries/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G030xx -DUSE_FULL_LL_DRIVER -c -I../Core/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G0xx/Include -I../Drivers/CMSIS/Include -O2 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-DMC-2f-DMC-2f-Auxilaries

clean-DMC-2f-DMC-2f-Auxilaries:
	-$(RM) ./DMC/DMC/Auxilaries/Display.cyclo ./DMC/DMC/Auxilaries/Display.d ./DMC/DMC/Auxilaries/Display.o ./DMC/DMC/Auxilaries/Display.su ./DMC/DMC/Auxilaries/SWS.cyclo ./DMC/DMC/Auxilaries/SWS.d ./DMC/DMC/Auxilaries/SWS.o ./DMC/DMC/Auxilaries/SWS.su ./DMC/DMC/Auxilaries/pedalAssist.cyclo ./DMC/DMC/Auxilaries/pedalAssist.d ./DMC/DMC/Auxilaries/pedalAssist.o ./DMC/DMC/Auxilaries/pedalAssist.su

.PHONY: clean-DMC-2f-DMC-2f-Auxilaries

