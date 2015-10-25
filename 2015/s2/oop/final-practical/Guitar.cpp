#include <iostream>
#include <string>
#include "Guitar.h"
using namespace std;

	Guitar::Guitar(string gChord):Instrument(true, false) //inheritance
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

	void Guitar::playAction(){ //polymorphism

		cout << "The guitar player plays by strumming the strings." << endl;

	}
