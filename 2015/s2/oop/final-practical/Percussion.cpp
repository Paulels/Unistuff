#include <iostream>
#include <string>
#include "Percussion.h"
using namespace std;

	Percussion::Percussion(string instrument):Instrument(true, false)
{

		setInstrument(instrument);
		getInstrument();
	
	}

	Percussion::Percussion(){}

	void Percussion::setInstrument(string i){

		instrument=i;

	}

	string Percussion::getInstrument(){

		return instrument;

	}
