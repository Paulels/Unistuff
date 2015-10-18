#include <iostream>
#include <string>
#include "Guitar.h"
using namespace std;

	Guitar::Guitar(string gChord):Instrument(true, false)
{

		setGChord(gChord);
		getGChord();
	
	}

	Guitar::Guitar(){}

	void Guitar::setGChord(string gc){

		gChord=gc;

	}

	string Guitar::getGChord(){

		return gChord;

	}
