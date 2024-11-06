################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DMC/Commutation/SVM.c \
../DMC/Commutation/motor.c 

OBJS += \
./DMC/Commutation/SVM.o \
./DMC/Commutation/motor.o 

C_DEPS += \
./DMC/Commutation/SVM.d \
./DMC/Commutation/motor.d 


# Each subdirectory must supply rules for building sources it contributes
DMC/Commutation/%.o DMC/Commutation/%.su DMC/Commutation/%.cyclo: ../DMC/Commutation/%.c DMC/Commutation/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G030xx -DUSE_FULL_LL_DRIVER -c -I"D:/DMC_G0/DMC/HeaderFile" -I../Core/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G0xx/Include -I../Drivers/CMSIS/Include -O2 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-DMC-2f-Commutation

clean-DMC-2f-Commutation:
	-$(RM) ./DMC/Commutation/SVM.cyclo ./DMC/Commutation/SVM.d ./DMC/Commutation/SVM.o ./DMC/Commutation/SVM.su ./DMC/Commutation/motor.cyclo ./DMC/Commutation/motor.d ./DMC/Commutation/motor.o ./DMC/Commutation/motor.su

.PHONY: clean-DMC-2f-Commutation

