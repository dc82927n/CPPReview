.PHONY: clean All

All:
	@echo "----------Building project:[ CPPLab1_1 - Debug ]----------"
	@cd "CPPLab1_1" && "$(MAKE)" -f  "CPPLab1_1.mk"
clean:
	@echo "----------Cleaning project:[ CPPLab1_1 - Debug ]----------"
	@cd "CPPLab1_1" && "$(MAKE)" -f  "CPPLab1_1.mk" clean
