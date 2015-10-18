#include <iostream>
#include <string>
#include "Trumpet.h"
using namespace std;


	Trumpet::Trumpet(bool useMute)
{

		setUseMute(useMute);
		getUseMute();
	
	}

	Trumpet::Trumpet(){}

	void Trumpet::setUseMute(bool usemute){

		useMute=usemute;

	}

	bool Trumpet::getUseMute(){

		return useMute;

	}

	void Trumpet::playAction(){

		cout << "The trumpet player plays the trumpet by pressing down valves." << endl;

	}
