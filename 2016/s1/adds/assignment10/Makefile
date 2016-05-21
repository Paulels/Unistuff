
all: Compiled 

Compiled: main.o Node.o Container.o
	g++ -o Compiled main.o Node.o Container.o


Node.o: Node.cpp Node.h
	g++ -c Node.cpp

Container.o: Container.cpp Container.h Node.h
	g++ -c Container.cpp

main.o: main.cpp Node.h Container.h
	g++ -c main.cpp



clean:
	rm -f Compiled *.o
