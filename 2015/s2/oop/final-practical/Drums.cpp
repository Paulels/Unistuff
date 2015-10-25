#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>
#include "Drums.h"
using namespace std;

	Drums::Drums(string style):Instrument(true, false)
{

		setStyle(style);
		getStyle();
	
	}

	Drums::Drums(){}

	void Drums::setStyle(string s){

		style=s;

	}

	string Drums::getStyle(){

		return style;

	}

	void Drums::fill(){

		int l=rand() % 6 + 2;
		cout << "The drummmer is playing a fill for " << l << " beats." << endl;

	}

	void Drums::playAction(){

		cout << "The ddum player plays by hitting the various drums in time with the beat." << endl;

	}
