################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
super_terminal/debug_terminal.obj: ../super_terminal/debug_terminal.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"E:/Program Files/Ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu0 -Ooff --include_path="G:/CCSV7workspace/28377_UPS/DEBUG_TERMINAL_" --include_path="G:/CCSV7workspace/28377_UPS/DEBUG_TERMINAL_/super_terminal" --include_path="G:/CCSV7workspace/28377_UPS/DEBUG_TERMINAL_/device" --include_path="E:/Program Files/Ti/c2000/C2000Ware_1_00_06_00/driverlib/f28004x/driverlib" --include_path="E:/Program Files/Ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/include" --define=DEBUG --define=CPU1 --define=_FLASH --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="super_terminal/debug_terminal.d_raw" --obj_directory="super_terminal" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

super_terminal/vsprintf.obj: ../super_terminal/vsprintf.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"E:/Program Files/Ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu0 -Ooff --include_path="G:/CCSV7workspace/28377_UPS/DEBUG_TERMINAL_" --include_path="G:/CCSV7workspace/28377_UPS/DEBUG_TERMINAL_/super_terminal" --include_path="G:/CCSV7workspace/28377_UPS/DEBUG_TERMINAL_/device" --include_path="E:/Program Files/Ti/c2000/C2000Ware_1_00_06_00/driverlib/f28004x/driverlib" --include_path="E:/Program Files/Ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/include" --define=DEBUG --define=CPU1 --define=_FLASH --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="super_terminal/vsprintf.d_raw" --obj_directory="super_terminal" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


