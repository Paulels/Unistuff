#include <iostream>
#include <string>
#include "Drums.h"
using namespace std;

	Drums::Drums(string style):Instrument(true, false){

		setStyle(style);
		getStyle();
	
	}

	Drums::Drums(){}

	Drums::~Drums(){}

	void setStyle(string s){

		style=s;

	}

	string getStyle(){

		return style;

	}
	
	void dStyle(){

		cout << "

	}
