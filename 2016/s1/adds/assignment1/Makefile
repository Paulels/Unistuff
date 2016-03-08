all: Compiled 

Compiled: Main.o Palindrome.o
	g++ -o Compiled Main.o Palindrome.o



Palindrome.o: Palindrome.cpp Palindrome.h
	g++ -c Palindrome.cpp

Main.o: Main.cpp Palindrome.h
	g++ -c Main.cpp



clean:
	rm -f Compiled *.o

