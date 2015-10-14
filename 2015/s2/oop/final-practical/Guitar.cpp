#include <iostream>
#include <string>
#include "Guitar.h"
using namespace std;

	Guitar::Guitar(string gChord):Instrument("true", "false"){

		setGChord(gChord);
		getGChord();
	
	}

	Guitar::Guitar(){}

	Guitar::~Guitar(){}

	void setGChord(string gc){

		gChord=gc;

	}

	string getGChord(){

		return gChord;

	}
	
	void stateGChord(){

		cout << "

	}
