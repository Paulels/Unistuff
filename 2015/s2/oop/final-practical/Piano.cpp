#include <iostream>
#include <string>
#include "Piano.h"
using namespace std;

	Piano::Piano(string pChord):Instrument(true, false) //inheritance
{

		setPChord(pChord);
		getPChord();
	
	}

	Piano::Piano(){}

	void Piano::setPChord(string pc){

		pChord=pc;

	}

	string Piano::getPChord(){

		return pChord;

	}

	void Piano::playAction(){ //polymorphism

		cout << "The piano player plays by hitting keys with their fingers." << endl;

	}

