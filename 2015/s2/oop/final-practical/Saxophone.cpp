#include <iostream>
#include <string>
#include "Saxophone.h"
using namespace std;


	Saxophone::Saxophone(bool vibrato)
{

		setVibrato(vibrato);
		getVibrato();
	
	}

	Saxophone::Saxophone(){}

	void Saxophone::setVibrato(bool vibrat){

		vibrato=vibrat;

	}

	bool Saxophone::getVibrato(){

		return vibrato;

	}

	void Saxophone::playAction(){

		cout << "The saxophone player plays the saxophone by pressing down keys." << endl;

	}

