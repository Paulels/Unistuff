#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
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

	string sty;
	int beats;
	string note="H";
	string accidental="nothing";

	cout << //ask for style
	cin >> sty;
	BigBand.playsyle(string sty,Drums a);
	cout << //ask for beats in bar
	cin >> beats;
	Conductor.beatsInBar(int beats);

	cout << // ask for note
	cin >> note
while(note!="a"||note!="A"||note!="b"||note!="B"||note!="c"||note!="C"||note!="d"||note!="D"||note!="e"||note!="E"||note!="f"||note!="F"||note!="g"||note!="G"){
	cpout << "invalid enter a valid note" << endl;
	cin << note << endl;
}
	cout << //ask for accidental
	cin >> //accidental
if(accidental!="Sharp"||accidental!="sharp"||accidental!="Flat"||accidental!="flat"||accidental!="Natural"||accidental!="natural"){
	cout << "accidental is invalid so accidental will be natural" endl;
	accidental="natural";
	string str1=strcat(note," ");
	cout << "The instruments are playing" << strcat(str1,accidental) << endl;
	string lnote=tolower(note);
	string laccidental=tolower(accidental);
	//set all saxs, trumpets and trombones bnote and ntype

//delete at end

return 0;
}
#endif //WEBSUBMIT
