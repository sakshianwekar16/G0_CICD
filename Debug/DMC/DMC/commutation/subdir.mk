################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DMC/DMC/commutation/SVM.c \
../DMC/DMC/commutation/motor.c 

OBJS += \
./DMC/DMC/commutation/SVM.o \
./DMC/DMC/commutation/motor.o 

C_DEPS += \
./DMC/DMC/commutation/SVM.d \
./DMC/DMC/commutation/motor.d 


# Each subdirectory must supply rules for building sources it contributes
DMC/DMC/commutation/%.o DMC/DMC/commutation/%.su DMC/DMC/commutation/%.cyclo: ../DMC/DMC/commutation/%.c DMC/DMC/commutation/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G030xx -DUSE_FULL_LL_DRIVER -c -I../Core/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G0xx/Include -I../Drivers/CMSIS/Include -O2 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-DMC-2f-DMC-2f-commutation

clean-DMC-2f-DMC-2f-commutation:
	-$(RM) ./DMC/DMC/commutation/SVM.cyclo ./DMC/DMC/commutation/SVM.d ./DMC/DMC/commutation/SVM.o ./DMC/DMC/commutation/SVM.su ./DMC/DMC/commutation/motor.cyclo ./DMC/DMC/commutation/motor.d ./DMC/DMC/commutation/motor.o ./DMC/DMC/commutation/motor.su

.PHONY: clean-DMC-2f-DMC-2f-commutation

