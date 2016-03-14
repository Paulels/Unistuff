all: Compiled 

Compiled: main.o Palindrome.o
	g++ -o Compiled main.o Palindrome.o



Palindrome.o: Palindrome.cpp Palindrome.h
	g++ -c Palindrome.cpp

main.o: main.cpp Palindrome.h
	g++ -c main.cpp



clean:
	rm -f Compiled *.o

