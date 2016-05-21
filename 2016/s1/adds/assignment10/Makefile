
all: Compiled 

Compiled: main.o Node.o BinaryTree.o
	g++ -o Compiled main.o Node.o BinaryTree.o


Node.o: Node.cpp Node.h
	g++ -c Node.cpp

BinaryTree.o: BinaryTree.cpp BinaryTree.h Node.h
	g++ -c BinaryTree.cpp

main.o: main.cpp Node.h BinaryTree.h
	g++ -c main.cpp



clean:
	rm -f Compiled *.o
