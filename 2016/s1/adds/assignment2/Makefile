all: Compiled 

Compiled: main.o human.o computer.o referee.o GameController.o
	g++ -o Compiled main.o human.o computer.o referee.o GameController.o



GameController.o: GameController.cpp GameController.h
	g++ -c GameController.cpp

referee.o: referee.cpp referee.h
	g++ -c referee.cpp

computer.o: computer.cpp computer.h
	g++ -c computer.cpp

human.o: human.cpp human.h
	g++ -c human.cpp

main.o: main.cpp human.h computer.h referee.h GameController.h
	g++ -c main.cpp



clean:
	rm -f Compiled *.o

