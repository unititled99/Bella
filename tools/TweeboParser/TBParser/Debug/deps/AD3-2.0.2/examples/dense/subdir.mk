################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../deps/AD3-2.0.2/examples/dense/simple_grid.o 

CPP_SRCS += \
../deps/AD3-2.0.2/examples/dense/simple_grid.cpp 

OBJS += \
./deps/AD3-2.0.2/examples/dense/simple_grid.o 

CPP_DEPS += \
./deps/AD3-2.0.2/examples/dense/simple_grid.d 


# Each subdirectory must supply rules for building sources it contributes
deps/AD3-2.0.2/examples/dense/%.o: ../deps/AD3-2.0.2/examples/dense/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


