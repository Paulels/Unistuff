all: Compiled

Compiled: BigBand.o Instrument.o Voice.o Brass.o Drums.o Piano.o Percussion.o Guitar.o Trombone.o Trumpet.o Saxophone.o MainProgram.o Conductor.o
	g++ -o Compiled BigBand.o Instrument.o Voice.o Brass.o Drums.o Piano.o Percussion.o Guitar.o Trombone.o Trumpet.o Saxophone.o MainProgram.o Conductor.o

BigBand.o: BigBand.cpp BigBand.h Saxophone.h Brass.h Instrument.h Trumpet.h Trombone.h Guitar.h Percussion.h Piano.h Drums.h Voice.h Conductor.h
	g++ -c BigBand.cpp

Instrument.o: Instrument.cpp Instrument.h
	g++ -c Instrument.cpp

Voice.o: Voice.cpp Voice.h Instrument.h
	g++ -c Voice.cpp

Brass.o: Brass.cpp Brass.h Instrument.h
	g++ -c Brass.cpp

Conductor.o: Conductor.cpp Conductor.h
	g++ -c Conductor.cpp

Drums.o: Drums.cpp Drums.h Instrument.h
	g++ -c Drums.cpp

Piano.o: Piano.cpp Piano.h Instrument.h
	g++ -c Piano.cpp

Percussion.o: Percussion.cpp Percussion.h Instrument.h
	g++ -c Percussion.cpp

Guitar.o: Guitar.cpp Guitar.h Instrument.h
	g++ -c Guitar.cpp

Trombone.o: Trombone.cpp Trombone.h Brass.h
	g++ -c Trombone.cpp

Trumpet.o: Trumpet.cpp Trumpet.h Brass.h
	g++ -c Trumpet.cpp

Saxophone.o: Saxophone.cpp Saxophone.h Brass.h
	g++ -c Saxophone.cpp

MainProgram.o: MainProgram.cpp Saxophone.h Brass.h Instrument.h Trumpet.h Trombone.h Guitar.h Percussion.h Piano.h Drums.h Voice.h BigBand.h Conductor.h
	g++ -c MainProgram.cpp

clean:
	rm -f Compiled *.o

