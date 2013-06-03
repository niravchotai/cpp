################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Author.cpp \
../Book.cpp \
../TestAuthor.cpp \
../TestBook.cpp 

OBJS += \
./Author.o \
./Book.o \
./TestAuthor.o \
./TestBook.o 

CPP_DEPS += \
./Author.d \
./Book.d \
./TestAuthor.d \
./TestBook.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


