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
		void Brass::setBType(string bt){
			bType=bt;
}
		string Brass::getBType(){
			return bType;
}
