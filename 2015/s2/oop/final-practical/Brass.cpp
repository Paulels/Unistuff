#include <iostream>
#include <string>
#include "Brass.h"
using namespace std;

		Brass::Brass(string bNote,string nType,string bType):Instrument(true,false){ //Brass is also an instrument
			setBNote(bNote);
			getBNote();
			setNoteType(nType);
			getNoteType();
			setBType(bType);
			getBType();
}
		Brass::Brass(){}	

		void Brass::setBNote(string bn){
			bNote=bn;
}
		string Brass::getBNote(){
			return bNote;
}
		void Brass::setNoteType(string nt){
			nType=nt;
}
		string Brass::getNoteType(){
			return nType;
}
		void Brass::setBType(string bt){
			bType=bt;
}
		string Brass::getBType(){
			return bType;
}
		void Brass::noteFrequency(string note, string accidental){ //To show use of different formats for numbers other than int
			float F;
			if (note=="c"||note=="C"){
				if (accidental=="sharp"||accidental=="Sharp"){
					F=277.2;
				}
				else if(accidental=="flat"||accidental=="Flat"){
					F=246.9;
				}
				else{
					F=261.6;
				}
			}
			else if (note=="d"||note=="D"){
				if (accidental=="sharp"||accidental=="Sharp"){
					F=311.1;
				}
				else if(accidental=="flat"||accidental=="Flat"){
					F=277.2;
				}
				else{
					F=293.7;
				}
			}
			else if (note=="e"||note=="E"){
				if (accidental=="sharp"||accidental=="Sharp"){
					F=349.2;
				}
				else if(accidental=="flat"||accidental=="Flat"){
					F=311.1;
				}
				else{
					F=329.6;
				}
			}
			else if (note=="f"||note=="F"){
				if (accidental=="sharp"||accidental=="Sharp"){
					F=370.0;
				}
				else if(accidental=="flat"||accidental=="Flat"){
					F=329.6;
				}
				else{
					F=349.2;
				}
			}
			else if (note=="g"||note=="G"){
				if (accidental=="sharp"||accidental=="Sharp"){
					F=415.3;
				}
				else if(accidental=="flat"||accidental=="Flat"){
					F=370.0;
				}
				else{
					F=392.0;
				}
			}
			else if (note=="a"||note=="A"){
				if (accidental=="sharp"||accidental=="Sharp"){
					F=466.2;
				}
				else if(accidental=="flat"||accidental=="Flat"){
					F=415.3;
				}
				else{
					F=440.0;
				}
			}
			else if (note=="b"||note=="B"){
				if (accidental=="sharp"||accidental=="Sharp"){
					F=523.3;
				}
				else if(accidental=="flat"||accidental=="Flat"){
					F=466.2;
				}
				else{
					F=493.9;
				}
			}
			cout << "the frequency of that note is " << F << endl;
}
