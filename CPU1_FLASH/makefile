################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := E:/Program Files/Ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./main.obj" \
"./device/device.obj" \
"./device/f28004x_codestartbranch.obj" \
"./device/driverlib/adc.obj" \
"./device/driverlib/asysctl.obj" \
"./device/driverlib/can.obj" \
"./device/driverlib/cla.obj" \
"./device/driverlib/clapromcrc.obj" \
"./device/driverlib/cmpss.obj" \
"./device/driverlib/cputimer.obj" \
"./device/driverlib/dac.obj" \
"./device/driverlib/dcc.obj" \
"./device/driverlib/dcsm.obj" \
"./device/driverlib/dma.obj" \
"./device/driverlib/ecap.obj" \
"./device/driverlib/epwm.obj" \
"./device/driverlib/eqep.obj" \
"./device/driverlib/flash.obj" \
"./device/driverlib/fsi.obj" \
"./device/driverlib/gpio.obj" \
"./device/driverlib/hrcap.obj" \
"./device/driverlib/hrpwm.obj" \
"./device/driverlib/i2c.obj" \
"./device/driverlib/interrupt.obj" \
"./device/driverlib/lin.obj" \
"./device/driverlib/memcfg.obj" \
"./device/driverlib/pga.obj" \
"./device/driverlib/pmbus.obj" \
"./device/driverlib/sci.obj" \
"./device/driverlib/sdfm.obj" \
"./device/driverlib/spi.obj" \
"./device/driverlib/sysctl.obj" \
"./device/driverlib/version.obj" \
"./device/driverlib/xbar.obj" \
"./super_terminal/debug_terminal.obj" \
"./super_terminal/vsprintf.obj" \
"../28004x_generic_flash_lnk.cmd" \
"../device/driverlib/ccs/Debug/driverlib.lib" \
"../device/driverlib/ccs/Release/driverlib.lib" \
$(GEN_CMDS__FLAG) \
-llibc.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include device/subdir_vars.mk
-include device/driverlib/subdir_vars.mk
-include device/driverlib/ccs/Debug/subdir_vars.mk
-include device/driverlib/ccs/Release/subdir_vars.mk
-include super_terminal/subdir_vars.mk
-include subdir_rules.mk
-include device/subdir_rules.mk
-include device/driverlib/subdir_rules.mk
-include device/driverlib/ccs/Debug/subdir_rules.mk
-include device/driverlib/ccs/Release/subdir_rules.mk
-include super_terminal/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
DEBUG_TERMINAL_.out \

EXE_OUTPUTS__QUOTED += \
"DEBUG_TERMINAL_.out" \

BIN_OUTPUTS += \
DEBUG_TERMINAL_.hex \

BIN_OUTPUTS__QUOTED += \
"DEBUG_TERMINAL_.hex" \


# All Target
all: $(OBJS) $(CMD_SRCS) $(LIB_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "DEBUG_TERMINAL_.out"

# Tool invocations
DEBUG_TERMINAL_.out: $(OBJS) $(CMD_SRCS) $(LIB_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: C2000 Linker'
	"E:/Program Files/Ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu0 -Ooff --define=DEBUG --define=CPU1 --define=_FLASH --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number -z -m"DEBUG_TERMINAL_.map" --heap_size=0x400 --stack_size=0x100 --warn_sections -i"E:/Program Files/Ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/lib" -i"E:/Program Files/Ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/include" --reread_libs --diag_wrap=off --display_error_number --xml_link_info="DEBUG_TERMINAL__linkInfo.xml" --entry_point=code_start --rom_model -o "DEBUG_TERMINAL_.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

DEBUG_TERMINAL_.hex: $(EXE_OUTPUTS)
	@echo 'Building files: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo 'Invoking: C2000 Hex Utility'
	"E:/Program Files/Ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/bin/hex2000"  -o "DEBUG_TERMINAL_.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "main.obj" "device\device.obj" "device\f28004x_codestartbranch.obj" "device\driverlib\adc.obj" "device\driverlib\asysctl.obj" "device\driverlib\can.obj" "device\driverlib\cla.obj" "device\driverlib\clapromcrc.obj" "device\driverlib\cmpss.obj" "device\driverlib\cputimer.obj" "device\driverlib\dac.obj" "device\driverlib\dcc.obj" "device\driverlib\dcsm.obj" "device\driverlib\dma.obj" "device\driverlib\ecap.obj" "device\driverlib\epwm.obj" "device\driverlib\eqep.obj" "device\driverlib\flash.obj" "device\driverlib\fsi.obj" "device\driverlib\gpio.obj" "device\driverlib\hrcap.obj" "device\driverlib\hrpwm.obj" "device\driverlib\i2c.obj" "device\driverlib\interrupt.obj" "device\driverlib\lin.obj" "device\driverlib\memcfg.obj" "device\driverlib\pga.obj" "device\driverlib\pmbus.obj" "device\driverlib\sci.obj" "device\driverlib\sdfm.obj" "device\driverlib\spi.obj" "device\driverlib\sysctl.obj" "device\driverlib\version.obj" "device\driverlib\xbar.obj" "super_terminal\debug_terminal.obj" "super_terminal\vsprintf.obj" 
	-$(RM) "main.d" "device\device.d" "device\driverlib\adc.d" "device\driverlib\asysctl.d" "device\driverlib\can.d" "device\driverlib\cla.d" "device\driverlib\clapromcrc.d" "device\driverlib\cmpss.d" "device\driverlib\cputimer.d" "device\driverlib\dac.d" "device\driverlib\dcc.d" "device\driverlib\dcsm.d" "device\driverlib\dma.d" "device\driverlib\ecap.d" "device\driverlib\epwm.d" "device\driverlib\eqep.d" "device\driverlib\flash.d" "device\driverlib\fsi.d" "device\driverlib\gpio.d" "device\driverlib\hrcap.d" "device\driverlib\hrpwm.d" "device\driverlib\i2c.d" "device\driverlib\interrupt.d" "device\driverlib\lin.d" "device\driverlib\memcfg.d" "device\driverlib\pga.d" "device\driverlib\pmbus.d" "device\driverlib\sci.d" "device\driverlib\sdfm.d" "device\driverlib\spi.d" "device\driverlib\sysctl.d" "device\driverlib\version.d" "device\driverlib\xbar.d" "super_terminal\debug_terminal.d" "super_terminal\vsprintf.d" 
	-$(RM) "device\f28004x_codestartbranch.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

