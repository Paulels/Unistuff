#include <iostream>
#include <string>
#include "Percussion.h"
using namespace std;

	Percussion::Percussion(string instrument):Instrument("true", "false"){

		setInstrument(instrument);
		getInstrument();
	
	}

	Percussion::Percussion(){}

	Percussion::~Percussion(){}

	void setInstrument(string i){

		instrument=i;

	}

	string getInstrument(){

		return instrument;

	}
	
	void stateInstrument(){

		cout << "

	}
