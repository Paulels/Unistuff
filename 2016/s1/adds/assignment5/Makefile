
all: Compiled 

Compiled: main.o MapGeneric.o FilterGeneric.o ReduceGeneric.o MapTriple.o MapSquare.o MapAbsoluteValue.o FilterEven.o FilterPositive.o FilterPositiveTwoDigit.o ReduceMinimum.o ReduceGCD.o
	g++ -o Compiled main.o MapGeneric.o FilterGeneric.o ReduceGeneric.o MapTriple.o MapSquare.o MapAbsoluteValue.o FilterEven.o FilterPositive.o FilterPositiveTwoDigit.o ReduceMinimum.o ReduceGCD.o


MapGeneric.o: MapGeneric.cpp MapGeneric.h
	g++ -c MapGeneric.cpp

FilterGeneric.o: FilterGeneric.cpp FilterGeneric.h
	g++ -c FilterGeneric.cpp

ReduceGeneric.o: ReduceGeneric.cpp ReduceGeneric.h
	g++ -c ReduceGeneric.cpp

MapTriple.o: MapTriple.cpp MapTriple.h MapGeneric.h
	g++ -c MapTriple.cpp

MapSquare.o: MapSquare.cpp MapSquare.h MapGeneric.h
	g++ -c MapSquare.cpp

MapAbsoluteValue.o: MapAbsoluteValue.cpp MapAbsoluteValue.h MapGeneric.h
	g++ -c MapAbsoluteValue.cpp

FilterEven.o: FilterEven.cpp FilterEven.h FilterGeneric.h
	g++ -c FilterEven.cpp

FilterPositive.o: FilterPositive.cpp FilterPositive.h FilterGeneric.h
	g++ -c FilterPositive.cpp

FilterPositiveTwoDigit.o: FilterPositiveTwoDigit.cpp FilterPositiveTwoDigit.h FilterGeneric.h
	g++ -c FilterPositiveTwoDigit.cpp

ReduceMinimum.o: ReduceMinimum.cpp ReduceMinimum.h ReduceGeneric.h
	g++ -c ReduceMinimum.cpp

ReduceGCD.o: ReduceGCD.cpp ReduceGCD.h ReduceGeneric.h
	g++ -c ReduceGCD.cpp

main.o: main.cpp MapGeneric.h FilterGeneric.h ReduceGeneric.h MapTriple.h MapSquare.h MapAbsoluteValue.h FilterEven.h FilterPositive.h FilterPositiveTwoDigit.h ReduceMinimum.h ReduceGCD.h
	g++ -c main.cpp



clean:
	rm -f Compiled *.o
