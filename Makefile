.PHONY: clean All

All:
	@echo "----------Building project:[ UE119 - Debug ]----------"
	@cd "UE119" && "$(MAKE)" -f  "UE119.mk"
clean:
	@echo "----------Cleaning project:[ UE119 - Debug ]----------"
	@cd "UE119" && "$(MAKE)" -f  "UE119.mk" clean
