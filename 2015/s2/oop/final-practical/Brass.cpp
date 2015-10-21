#include <iostream>
#include <string>
#include "Brass.h"
using namespace std;

		Brass::Brass():Instrument(true,false){}		

		void Brass::setBNote(string bn){
			bNote=bn;
}
		string Brass::getBNote(){
			return bNote;
}
		string Brass::getNoteType(){
			return nType;
}
		void setNoteType(std::string nt){
			nType=nt;
}
		void Brass::setBType(string bt){
			bType=bt;
}
		string Brass::getBType(){
			return bType;
}
		void noteFrequency(string note, string accidental){
			float F;
			if (note==c){
				if (accidental==sharp){
					F=277.2;
				}
				else if(accidental==flat){
					F=246.9;
				}
				else{
					F=261.6;
				}
			}
			else if (note==d){
				if (accidental==sharp){
					F=277.2;
				}
				else if(accidental==flat){
					F=246.9;
				}
				else{
					F=261.6;
				}
			}
			else if (note==e){
				if (accidental==sharp){
					F=277.2;
				}
				else if(accidental==flat){
					F=246.9;
				}
				else{
					F=261.6;
				}
			}
			else if (note==f){
				if (accidental==sharp){
					F=277.2;
				}
				else if(accidental==flat){
					F=246.9;
				}
				else{
					F=261.6;
				}
			}
			else if (note==g){
				if (accidental==sharp){
					F=277.2;
				}
				else if(accidental==flat){
					F=246.9;
				}
				else{
					F=261.6;
				}
			}
			else if (note==a){
				if (accidental==sharp){
					F=277.2;
				}
				else if(accidental==flat){
					F=246.9;
				}
				else{
					F=261.6;
				}
			}
			else if (note==b){
				if (accidental==sharp){
					F=277.2;
				}
				else if(accidental==flat){
					F=246.9;
				}
				else{
					F=261.6;
				}
			}
}
