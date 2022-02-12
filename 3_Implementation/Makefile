PROJ_NAME = cal
SRC= src/main.c src/cal.c src/test_cal.c src/unity.c


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
	gcc $(SRC) -Iinc -o  $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

Run : Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC)) 

Clean :
	$(RM) $(call FixPath,*.out)