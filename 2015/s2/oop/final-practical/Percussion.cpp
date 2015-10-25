#include <iostream>
#include <string>
#include "Percussion.h"
using namespace std;

	Percussion::Percussion(string instrument):Instrument(true, false) //inheritance
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

	void Percussion::playAction(){  //polymorphism

		cout << "The pecussion players playing action depends on what percudiion instrument they are playing." << endl;

	}
