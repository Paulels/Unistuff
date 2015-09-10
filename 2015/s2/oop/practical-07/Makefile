all: compiled1-1 compiled1-2 compiled1-3 compiled1-4

compiled1-1: Animal.o Wolf.o Dragon.o program1-1.o
	g++ -o compiled1-1 Animal.o Wolf.o Dragon.o program1-1.o 

compiled1-2: Zoo.o Animal.o Wolf.o Dragon.o program1-2.o
	g++ -o compiled1-2 Zoo.o Animal.o Wolf.o Dragon.o program1-2.o 

compiled1-3: Zoo.o Animal.o Wolf.o Dragon.o program1-3.o
	g++ -o compiled1-3 Zoo.o Animal.o Wolf.o Dragon.o program1-3.o 

compiled1-4: Zoo.o Animal.o Wolf.o Dragon.o program1-4.o
	g++ -o compiled1-4 Zoo.o Animal.o Wolf.o Dragon.o program1-4.o 

Zoo.o: Zoo.cpp Zoo.h
	g++ -c Zoo.cpp

animal.o: Animal.cpp Animal.h
	g++ -c Animal.cpp

wolf.o: Wolf.cpp Wolf.h
	g++ -c wolf.cpp

dragon.o: Dragon.cpp Dragon.h
	g++ -c Dragon.cpp

program1-1.o: program1-1.cpp Animal.h Wolf.h Dragon.h
	g++ -c program1-1.cpp

program1-2.o: program1-2.cpp Zoo.h Animal.h Wolf.h Dragon.h
	g++ -c program1-2.cpp

program1-3.o: program1-3.cpp Zoo.h Animal.h Wolf.h Dragon.h
	g++ -c program1-3.cpp

program1-4.o: program1-4.cpp Zoo.h Animal.h Wolf.h Dragon.h
	g++ -c program1-4.cpp

clean:
	rm -f compiled1-1 compiled1-2 compiled1-3 compiled1-4 *.o
