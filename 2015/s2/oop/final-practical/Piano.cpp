#include <iostream>
#include <string>
#include "Piano.h"
using namespace std;

	Piano::Piano(string pChord):Instrument("true", "false"){

		setPChord(pChord);
		getPChord();
	
	}

	Piano::Piano(){}

	Piano::~Piano(){}

	void setPChord(string pc){

		pChord=pc;

	}

	string getPChord(){

		return pChord;

	}

