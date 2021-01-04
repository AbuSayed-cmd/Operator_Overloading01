.PHONY: clean All

All:
	@echo "----------Building project:[ Overloading_01 - Debug ]----------"
	@cd "Overloading_01" && "$(MAKE)" -f  "Overloading_01.mk"
clean:
	@echo "----------Cleaning project:[ Overloading_01 - Debug ]----------"
	@cd "Overloading_01" && "$(MAKE)" -f  "Overloading_01.mk" clean
