EXE=structure
SRC=structure.c

all: $(SRC)
	gcc -o $(EXE)NoFpack $(SRC)
	gcc -fpack-struct=1 -o $(EXE)Fpack1 $(SRC)

clean:
	rm -rf $(EXE)*pack*
