################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/subdir.mk
-include Middlewares/Modbus_RTU/subdir.mk
-include Drivers/STM32F1xx_HAL_Driver/Src/subdir.mk
-include Csro/fnd_rf433/subdir.mk
-include Csro/fnd_output/subdir.mk
-include Csro/fnd_led/subdir.mk
-include Csro/fnd_input/subdir.mk
-include Csro/fnd_flash/subdir.mk
-include Csro/fnd_com/subdir.mk
-include Core/ThreadSafe/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := csro_6ch_motor_ctrl_2023_06_29
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
csro_6ch_motor_ctrl_2023_06_29.elf \

MAP_FILES += \
csro_6ch_motor_ctrl_2023_06_29.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
csro_6ch_motor_ctrl_2023_06_29.list \


# All Target
all: main-build

# Main-build Target
main-build: csro_6ch_motor_ctrl_2023_06_29.elf secondary-outputs

# Tool invocations
csro_6ch_motor_ctrl_2023_06_29.elf csro_6ch_motor_ctrl_2023_06_29.map: $(OBJS) $(USER_OBJS) C:\Users\Derek\STM32CubeIDE\workspace_1.12.1\csro_6ch_motor_ctrl_2023_06_29\STM32F103RCTX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "csro_6ch_motor_ctrl_2023_06_29.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"C:\Users\Derek\STM32CubeIDE\workspace_1.12.1\csro_6ch_motor_ctrl_2023_06_29\STM32F103RCTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="csro_6ch_motor_ctrl_2023_06_29.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

csro_6ch_motor_ctrl_2023_06_29.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "csro_6ch_motor_ctrl_2023_06_29.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) csro_6ch_motor_ctrl_2023_06_29.elf csro_6ch_motor_ctrl_2023_06_29.list csro_6ch_motor_ctrl_2023_06_29.map default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
