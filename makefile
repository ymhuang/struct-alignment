EXE=structure
SRC=structure.c

all: $(SRC)
	gcc -o $(EXE) $(SRC)

clean:
	rm -rf $(EXE)
