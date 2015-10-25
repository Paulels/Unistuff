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

	void Saxophone::favStyle(string styl){

		if (styl=="jazz"){
			cout << "Jazz is a saxophones favourite style." << endl;
		}
		else{
			cout << "This is not this instruments favourite style." << endl;
		}
	}

