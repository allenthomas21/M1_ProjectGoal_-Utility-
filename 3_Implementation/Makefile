PROJ_NAME = cal
SRC= main.c cal.c test_cal.c unity.c


ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif



Build : $(SRC)
	gcc $(SRC) -o  $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

Run : Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC)) 

Clean :
	$(RM) $(call FixPath,*.out)