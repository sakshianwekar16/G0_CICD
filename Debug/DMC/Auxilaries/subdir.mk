################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DMC/Auxilaries/Display.c \
../DMC/Auxilaries/SWS.c \
../DMC/Auxilaries/pedalAssist.c 

OBJS += \
./DMC/Auxilaries/Display.o \
./DMC/Auxilaries/SWS.o \
./DMC/Auxilaries/pedalAssist.o 

C_DEPS += \
./DMC/Auxilaries/Display.d \
./DMC/Auxilaries/SWS.d \
./DMC/Auxilaries/pedalAssist.d 


# Each subdirectory must supply rules for building sources it contributes
DMC/Auxilaries/%.o DMC/Auxilaries/%.su DMC/Auxilaries/%.cyclo: ../DMC/Auxilaries/%.c DMC/Auxilaries/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G030xx -DUSE_FULL_LL_DRIVER -c -I"D:/Projects/CI_CD/G0_CICD/DMC/Headerfile" -I../Core/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G0xx/Include -I../Drivers/CMSIS/Include -O2 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-DMC-2f-Auxilaries

clean-DMC-2f-Auxilaries:
	-$(RM) ./DMC/Auxilaries/Display.cyclo ./DMC/Auxilaries/Display.d ./DMC/Auxilaries/Display.o ./DMC/Auxilaries/Display.su ./DMC/Auxilaries/SWS.cyclo ./DMC/Auxilaries/SWS.d ./DMC/Auxilaries/SWS.o ./DMC/Auxilaries/SWS.su ./DMC/Auxilaries/pedalAssist.cyclo ./DMC/Auxilaries/pedalAssist.d ./DMC/Auxilaries/pedalAssist.o ./DMC/Auxilaries/pedalAssist.su

.PHONY: clean-DMC-2f-Auxilaries

