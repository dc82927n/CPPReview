.PHONY: clean All

All:
	@echo "----------Building project:[ PID1 - Debug ]----------"
	@cd "PID1" && "$(MAKE)" -f  "PID1.mk"
clean:
	@echo "----------Cleaning project:[ PID1 - Debug ]----------"
	@cd "PID1" && "$(MAKE)" -f  "PID1.mk" clean
