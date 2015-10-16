#include <iostream>
#include <string>
#include "Drums.h"
using namespace std;

	Drums::Drums(string style)//:Instrument(true, false)
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
