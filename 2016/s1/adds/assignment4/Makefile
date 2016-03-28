all: Compiled 

Compiled: main.o Palindrome.o Fibonacci.o EfficientFibonacci.o
	g++ -o Compiled main.o Palindrome.o Fibonacci.o EfficientFibonacci.o


Palindrome.o: Palindrome.cpp Palindrome.h
	g++ -c Palindrome.cpp

Fibonacci.o: Fibonacci.cpp Fibonacci.h
	g++ -c Fibonacci.cpp

EfficientFibonacci.o: EfficientFibonacci.cpp EfficientFibonacci.h
	g++ -c EfficientFibonacci.cpp

main.o: main.cpp Palindrome.h Fibonacci.h EfficientFibonacci.h
	g++ -c main.cpp



clean:
	rm -f Compiled *.o
