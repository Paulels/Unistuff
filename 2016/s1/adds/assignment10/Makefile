
all: Compiled 

Compiled: main.o Node.o Stack.o BinaryTree.o
	g++ -o Compiled main.o Node.o Stack.o BinaryTree.o


Node.o: Node.cpp Node.h
	g++ -c Node.cpp

Stack.o: Stack.cpp Stack.h Node.h
	g++ -c Stack.cpp

BinaryTree.o: BinaryTree.cpp BinaryTree.h Node.h Stack.h
	g++ -c BinaryTree.cpp

main.o: main.cpp Node.h Stack.h BinaryTree.h
	g++ -c main.cpp



clean:
	rm -f Compiled *.o
