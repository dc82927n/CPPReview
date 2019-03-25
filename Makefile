.PHONY: clean All

All:
	@echo "----------Building project:[ CodeLab1_2 - Debug ]----------"
	@cd "CodeLab1_2" && "$(MAKE)" -f  "CodeLab1_2.mk"
clean:
	@echo "----------Cleaning project:[ CodeLab1_2 - Debug ]----------"
	@cd "CodeLab1_2" && "$(MAKE)" -f  "CodeLab1_2.mk" clean
