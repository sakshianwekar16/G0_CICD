################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DMC/DrivingHandler/drivinghandler.c 

OBJS += \
./DMC/DrivingHandler/drivinghandler.o 

C_DEPS += \
./DMC/DrivingHandler/drivinghandler.d 


# Each subdirectory must supply rules for building sources it contributes
DMC/DrivingHandler/%.o DMC/DrivingHandler/%.su DMC/DrivingHandler/%.cyclo: ../DMC/DrivingHandler/%.c DMC/DrivingHandler/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G030xx -c -I"D:/DMC_G0/DMC/Headerfile" -I../Core/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G0xx/Include -I../Drivers/CMSIS/Include -O2 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-DMC-2f-DrivingHandler

clean-DMC-2f-DrivingHandler:
	-$(RM) ./DMC/DrivingHandler/drivinghandler.cyclo ./DMC/DrivingHandler/drivinghandler.d ./DMC/DrivingHandler/drivinghandler.o ./DMC/DrivingHandler/drivinghandler.su

.PHONY: clean-DMC-2f-DrivingHandler
