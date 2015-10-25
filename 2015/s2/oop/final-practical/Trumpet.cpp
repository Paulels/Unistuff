#include <iostream>
#include <string>
#include "Trumpet.h"
using namespace std;


	Trumpet::Trumpet(bool useMute):Brass("C","Natural"," ")
{

		setUseMute(useMute);
		getUseMute();
	
	}

	Trumpet::Trumpet(){}

	void Trumpet::setUseMute(bool usemute){ //used to change the state 

		useMute=usemute;

	}

	bool Trumpet::getUseMute(){  //used to return the states value at the time

		return useMute;

	}

	void Trumpet::playAction(){

		cout << "The trumpet player plays the trumpet by pressing down valves." << endl;

	}

	void Trumpet::favStyle(string styl){

		if (styl=="latin"){
			cout << "Latin is a tumpets favourite style." << endl;
		}
		else{
			cout << "This is not this instruments favourite style." << endl;
		}
	}
