#include <iostream>
#include <string>
#include "Brass.h"
using namespace std;

		Brass::Brass(string bNote,string nType,string bType):Instrument(true,false){
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
		void noteFrequency(string note, string accidental){
			float F;
			if (note=="c"){
				if (accidental=="sharp"){
					F=277.2;
				}
				else if(accidental=="flat"){
					F=246.9;
				}
				else{
					F=261.6;
				}
			}
			else if (note=="d"){
				if (accidental=="sharp"){
					F=311.1;
				}
				else if(accidental=="flat"){
					F=277.2;
				}
				else{
					F=293.7;
				}
			}
			else if (note=="e"){
				if (accidental=="sharp"){
					F=349.2;
				}
				else if(accidental=="flat"){
					F=311.1;
				}
				else{
					F=329.6;
				}
			}
			else if (note=="f"){
				if (accidental=="sharp"){
					F=370.0;
				}
				else if(accidental=="flat"){
					F=329.6;
				}
				else{
					F=349.2;
				}
			}
			else if (note=="g"){
				if (accidental=="sharp"){
					F=415.3;
				}
				else if(accidental=="flat"){
					F=370.0;
				}
				else{
					F=392.0;
				}
			}
			else if (note=="a"){
				if (accidental=="sharp"){
					F=466.2;
				}
				else if(accidental=="flat"){
					F=415.3;
				}
				else{
					F=440.0;
				}
			}
			else if (note=="b"){
				if (accidental=="sharp"){
					F=523.3;
				}
				else if(accidental=="flat"){
					F=466.2;
				}
				else{
					F=493.9;
				}
			}
			cout << "the frequency of that note is " << F << endl;
}
