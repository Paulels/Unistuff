
all: Compiled 

Compiled: main.o Sort.o Search.o BubbleSort.o QuickSort.o RecursiveBinarySearch.o ThreePartSearch.o
	g++ -o Compiled main.o Sort.o Search.o BubbleSort.o QuickSort.o RecursiveBinarySearch.o ThreePartSearch.o


Sort.o: Sort.cpp Sort.h
	g++ -c Sort.cpp

Search.o: Search.cpp Search.h
	g++ -c Search.cpp

BubbleSort.o: BubbleSort.cpp BubbleSort.h Sort.h
	g++ -c BubbleSort.cpp

QuickSort.o: QuickSort.cpp QuickSort.h Sort.h
	g++ -c QuickSort.cpp

RecursiveBinarySearch.o: RecursiveBinarySearch.cpp RecursiveBinarySearch.h Search.h
	g++ -c RecursiveBinarySearch.cpp

ThreePartSearch.o: ThreePartSearch.cpp ThreePartSearch.h Search.h
	g++ -c ThreePartSearch.cpp

main.o: main.cpp Sort.h Search.h BubbleSort.h QuickSort.h RecursiveBinarySearch.h ThreePartSearch.h
	g++ -c main.cpp



clean:
	rm -f Compiled *.o
