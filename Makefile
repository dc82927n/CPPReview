.PHONY: clean All

All:
	@echo "----------Building project:[ ue74 - Debug ]----------"
	@cd "ue74" && "$(MAKE)" -f  "ue74.mk"
clean:
	@echo "----------Cleaning project:[ ue74 - Debug ]----------"
	@cd "ue74" && "$(MAKE)" -f  "ue74.mk" clean
