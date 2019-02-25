.PHONY: clean All

All:
	@echo "----------Building project:[ PID - Debug ]----------"
	@cd "PID" && "$(MAKE)" -f  "PID.mk"
clean:
	@echo "----------Cleaning project:[ PID - Debug ]----------"
	@cd "PID" && "$(MAKE)" -f  "PID.mk" clean
