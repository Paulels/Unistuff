all: Compiled 

Compiled: main.o Player.o Human.o Avalanche.o RandomComputer.o Bureaucrat.o Toolbox.o Crescendo.o PaperDoll.o FistFullODollars.o Referee.o Tournament.o
	g++ -o Compiled main.o Player.o Human.o Avalanche.o RandomComputer.o Bureaucrat.o Toolbox.o Crescendo.o PaperDoll.o FistFullODollars.o Referee.o Tournament.o


Player.o: Player.cpp Player.h
	g++ -c Player.cpp

Human.o: Human.cpp Human.h Player.h
	g++ -c Human.cpp

Avalanche.o: Avalanche.cpp Avalanche.h Player.h
	g++ -c Avalanche.cpp

RandomComputer.o: RandomComputer.cpp RandomComputer.h Player.h
	g++ -c RandomComputer.cpp

Bureaucrat.o: Bureaucrat.cpp Bureaucrat.h Player.h
	g++ -c Bureaucrat.cpp

Toolbox.o: Toolbox.cpp Toolbox.h Player.h
	g++ -c Toolbox.cpp

Crescendo.o: Crescendo.cpp Crescendo.h Player.h
	g++ -c Crescendo.cpp

PaperDoll.o: PaperDoll.cpp PaperDoll.h Player.h
	g++ -c PaperDoll.cpp

FistFullODollars.o: FistFullODollars.cpp FistFullODollars.h Player.h
	g++ -c FistFullODollars.cpp

Referee.o: Referee.cpp Referee.h Player.h Human.h Avalanche.h RandomComputer.h Bureaucrat.h Toolbox.h Crescendo.h PaperDoll.h FistFullODollars.h
	g++ -c Referee.cpp

Tournament.o: Tournament.cpp Tournament.h Player.h Human.h Avalanche.h RandomComputer.h Bureaucrat.h Toolbox.h Crescendo.h PaperDoll.h FistFullODollars.h Referee.h
	g++ -c Tournament.cpp

main.o: main.cpp Player.h Human.h Avalanche.h RandomComputer.h Bureaucrat.h Toolbox.h Crescendo.h PaperDoll.h FistFullODollars.h Referee.h Tournament.h
	g++ -c main.cpp



clean:
	rm -f Compiled *.o

