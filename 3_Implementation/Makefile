NAME= calculator
SRC= implementation.c implementation.h


ifdef OS
	RM=del /q
	Path=$(subst /,\,$1)
	EXEC = exe
else
	ifeq ($(shell unname), Linux)
		RM=em -rf
		Path= $1
		EXEC= out
	endif
endif
Build:
	gcc $(SRC) -o implementation.out
run:Build
	./main.out
