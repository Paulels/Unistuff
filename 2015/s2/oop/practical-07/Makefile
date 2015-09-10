all: compiled1-1 compiled1-2 compiled1-3 compiled1-4

compiled1-1: animal.o wolf.o dragon.o program1-1.o
	g++ -o compiled1-1 animal.o wolf.o dragon.o program1-1.o 

compiled1-2: zoo.o animal.o wolf.o dragon.o program1-2.o
	g++ -o compiled1-2 zoo.o animal.o wolf.o dragon.o program1-2.o 

compiled1-3: zoo.o animal.o wolf.o dragon.o program1-3.o
	g++ -o compiled1-3 zoo.o animal.o wolf.o dragon.o program1-3.o 

compiled1-4: zoo.o animal.o wolf.o dragon.o program1-4.o
	g++ -o compiled1-4 zoo.o animal.o wolf.o dragon.o program1-4.o 

zoo.o: zoo.cpp zoo.h
	g++ -c zoo.cpp

animal.o: animal.cpp animal.h
	g++ -c animal.cpp

wolf.o: wolf.cpp wolf.h
	g++ -c wolf.cpp

dragon.o: dragon.cpp dragon.h
	g++ -c dragon.cpp

program1-1.o: program1-1.cpp animal.h wolf.h dragon.h
	g++ -c program1-1.cpp

program1-2.o: program1-2.cpp zoo.h animal.h wolf.h dragon.h
	g++ -c program1-2.cpp

program1-3.o: program1-3.cpp zoo.h animal.h wolf.h dragon.h
	g++ -c program1-3.cpp

program1-4.o: program1-4.cpp zoo.h animal.h wolf.h dragon.h
	g++ -c program1-4.cpp

clean:
	rm -f compiled1-1 compiled1-2 compiled1-3 compiled1-4 *.o
