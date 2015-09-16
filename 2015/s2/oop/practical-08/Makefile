all: compiled1-1 compiled1-2 compiled1-3

compiled1-1: Staff.o Admin.o Academic.o program1-1.o
	g++ -o compiled1-1 Animal.o Wolf.o Dragon.o program1-1.o 

compiled1-2: Staff.o Admin.o Academic.o program1-2.o
	g++ -o compiled1-2 Zoo.o Animal.o Wolf.o Dragon.o program1-2.o 

compiled1-3: Staff.o Admin.o Academic.o program1-3.o
	g++ -o compiled1-3 Zoo.o Animal.o Wolf.o Dragon.o program1-3.o 

Zoo.o: Zoo.cpp Zoo.h
	g++ -c Zoo.cpp

Staff.o: Staff.cpp Staff.h
	g++ -c Staff.cpp

Admin.o: Admin.cpp Admin.h
	g++ -c Admin.cpp

Academic.o: Academic.cpp Academic.h
	g++ -c Academic.cpp

program1-1.o: program1-1.cpp Staff.h Admin.h Academic.h
	g++ -c program1-1.cpp

program1-2.o: program1-2.cpp Staff.h Admin.h Academic.h
	g++ -c program1-2.cpp

program1-3.o: program1-3.cpp Staff.h Admin.h Academic.h
	g++ -c program1-3.cpp

clean:
	rm -f compiled1-1 compiled1-2 compiled1-3 *.o

