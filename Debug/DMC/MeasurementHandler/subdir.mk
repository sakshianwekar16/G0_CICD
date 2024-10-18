################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DMC/MeasurementHandler/measurement.c 

OBJS += \
./DMC/MeasurementHandler/measurement.o 

C_DEPS += \
./DMC/MeasurementHandler/measurement.d 


# Each subdirectory must supply rules for building sources it contributes
DMC/MeasurementHandler/%.o DMC/MeasurementHandler/%.su DMC/MeasurementHandler/%.cyclo: ../DMC/MeasurementHandler/%.c DMC/MeasurementHandler/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G030xx -c -I"D:/DMC_G0/DMC/Headerfile" -I../Core/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G0xx/Include -I../Drivers/CMSIS/Include -O2 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-DMC-2f-MeasurementHandler

clean-DMC-2f-MeasurementHandler:
	-$(RM) ./DMC/MeasurementHandler/measurement.cyclo ./DMC/MeasurementHandler/measurement.d ./DMC/MeasurementHandler/measurement.o ./DMC/MeasurementHandler/measurement.su

.PHONY: clean-DMC-2f-MeasurementHandler

