.PHONY: clean All

All:
	@echo "----------Building project:[ UE_ForLoop_integers - Debug ]----------"
	@cd "UE_ForLoop_integers" && "$(MAKE)" -f  "UE_ForLoop_integers.mk"
clean:
	@echo "----------Cleaning project:[ UE_ForLoop_integers - Debug ]----------"
	@cd "UE_ForLoop_integers" && "$(MAKE)" -f  "UE_ForLoop_integers.mk" clean
