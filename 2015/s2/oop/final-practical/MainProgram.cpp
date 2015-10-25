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

	Conductor conductor1("Michael",51);
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

	//BigBand* Bigband1 = new BigBand(v3,v2,&drum1,&percussion1,&piano1,&guitar1,v1,v4,&conductor1,"Big Band 1","Jazzin");

	string sty;
	int beats;
	string note="H";
	string accidental="nothing";
	string answer="yes";

	cout << "What style should the band play in?" << endl;
	cin >> sty;
	Bigband1.playstyle(sty,drum1);

	cout << "How many beats should be conducted per bar?" << endl;
	cin >> beats;
	if(beats>0 && <=16){
	conductor1.beatsInBar(beats);
	}
	else{
	cout << "That is too hard for the conductor to conduct so he will conduct 4 beats per bar." << endl;

	cout << "What note should be played?" << endl;
	cin >> note;
if(note!="a"||note!="A"||note!="b"||note!="B"||note!="c"||note!="C"||note!="d"||note!="D"||note!="e"||note!="E"||note!="f"||note!="F"||note!="g"||note!="G"){
	cout << "invalid note, the note will be set to c." << endl;
	note="c";
}
	cout << "Whay accidental does this not have?" << endl;
	cin >> accidental;
if(accidental!="Sharp"||accidental!="sharp"||accidental!="Flat"||accidental!="flat"||accidental!="Natural"||accidental!="natural"){
	cout << "accidental is invalid so accidental will be natural" << endl;
	accidental="natural";
}
	cout << "The instruments are playing " << note << accidental << endl;
	//string lnote=tolower(note);
	//string laccidental=tolower(accidental);
	//set all saxs, trumpets and trombones bnote and ntype

	cout << "Should the drummer perform a fill?" << endl;
	cin >> answer;
	if (answer=="yes"||answer=="Yes"){
		drum1.fill();
	}
	else if (answer=="no"||answer=="No"){
		cout << "thats a shame he is a good drummer." << endl;
	}
	else {
		cout << "The answer was not yes or no so i will take it as you don't want the drummer to do a fill." << endl;
	}

	//delete Bigband1;

return 0;
}
#endif //WEBSUBMIT
