################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DMC/commutation/SVM.c \
../DMC/commutation/motor.c 

OBJS += \
./DMC/commutation/SVM.o \
./DMC/commutation/motor.o 

C_DEPS += \
./DMC/commutation/SVM.d \
./DMC/commutation/motor.d 


# Each subdirectory must supply rules for building sources it contributes
DMC/commutation/%.o DMC/commutation/%.su DMC/commutation/%.cyclo: ../DMC/commutation/%.c DMC/commutation/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G030xx -DUSE_FULL_LL_DRIVER -c -I"D:/DMC_G0/DMC/Headerfile" -I../Core/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G0xx/Include -I../Drivers/CMSIS/Include -O2 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-DMC-2f-commutation

clean-DMC-2f-commutation:
	-$(RM) ./DMC/commutation/SVM.cyclo ./DMC/commutation/SVM.d ./DMC/commutation/SVM.o ./DMC/commutation/SVM.su ./DMC/commutation/motor.cyclo ./DMC/commutation/motor.d ./DMC/commutation/motor.o ./DMC/commutation/motor.su

.PHONY: clean-DMC-2f-commutation

