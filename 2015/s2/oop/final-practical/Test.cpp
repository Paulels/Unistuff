#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <sstream>
#include <cstring>
#include "BigBand.h"
#include "Saxophone.h"
#include "Brass.h"
#include "Instrument.h"
#include "Trumpet.h"
#include "Trombone.h"
#include "Guitar.h"
#include "Percussion.h"
#include "Piano.h"
#include "Drums.h"
#include "Voice.h"
#include "Conductor.h"

using namespace std;

#ifndef WEBSUBMIT
int main(){

	Conductor conductor1("Michael",51); //creating all my classes
	Drums drum1("Jazz");
	Guitar guitar1("C");
	Percussion percussion1("Cowbell");
	Piano piano1("C");
	Saxophone sax1(true);
	sax1.setBType("Alto");
	Saxophone sax2(false);
	sax2.setBType("Alto");
	Saxophone sax3(false);
	sax3.setBType("Tenor");
	Saxophone sax4(false);
	sax4.setBType("Tenor");
	Saxophone sax5(false);
	sax5.setBType("Baritone");
	Trumpet trum1(true);
	trum1.setBType("First");
	Trumpet trum2(true);
	trum2.setBType("Second");
	Trumpet trum3(true);
	trum3.setBType("Third");
	Trumpet trum4(true);
	trum4.setBType("Fourth");
	Trombone trom1(false,false);
	trom1.setBType("First");
	Trombone trom2(false,false);
	trom1.setBType("Second");
	Trombone trom3(true,false);
	trom1.setBType("Third");
	Trombone trom4(true,false);
	trom1.setBType("Bass");
	Voice bass("Bass","B");
	Voice tenor("Tenor","D");
	Voice alto("Alto","F");
	Voice suprano("Suprano","G");

	Saxophone* v1[5]={&sax1,&sax2,&sax3,&sax4,&sax5};
	Trumpet* v2[4]={&trum1,&trum2,&trum3,&trum4};
	Trombone* v3[4]={&trom1,&trom2,&trom3,&trom4};
	Voice* v4[4]={&bass,&tenor,&alto,&suprano};

	BigBand Bigband1(v3,v2,&drum1,&percussion1,&piano1,&guitar1,v1,v4,&conductor1,"Big Band 1","Jazzin");

	Brass brass(); //seeing if i can create a brass class and the program shouldnt compile

return 0;
}
#endif //WEBSUBMIT




/*
Test1
Test1:BigBand.o Instrument.o Voice.o Brass.o Drums.o Piano.o Percussion.o Guitar.o Trombone.o Trumpet.o Saxophone.o Test.o Conductor.o
	g++ -o Compiled BigBand.o Instrument.o Voice.o Brass.o Drums.o Piano.o Percussion.o Guitar.o Trombone.o Trumpet.o Saxophone.o Test.o Conductor.o
Test.o: Test.cpp Saxophone.h Brass.h Instrument.h Trumpet.h Trombone.h Guitar.h Percussion.h Piano.h Drums.h Voice.h BigBand.h Conductor.h
	g++ -c Test.cpp
Test1
*/
