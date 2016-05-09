
all: Compiled 

Compiled: main.o BinaryNode.o Individual.o Rearrange.o BitFlip.o
	g++ -o Compiled main.o BinaryNode.o Individual.o Rearrange.o BitFlip.o


BinaryNode.o: BinaryNode.cpp BinaryNode.h
	g++ -c BinaryNode.cpp

Individual.o: Individual.cpp Individual.h BinaryNode.h
	g++ -c Individual.cpp

BitFlip.o: BitFlip.cpp BitFlip.h Individual.h BinaryNode.h
	g++ -c BitFlip.cpp

Rearrange.o: Rearrange.cpp Rearrange.h Individual.h BinaryNode.h
	g++ -c Rearrange.cpp

main.o: main.cpp BinaryNode.h Individual.h Rearrange.h BitFlip.h
	g++ -c main.cpp



clean:
	rm -f Compiled *.o
