#include <iostream>
#include <string>
#include "Trombone.h"
using namespace std;


	Trombone::Trombone(bool useTrigger,bool useMute):Brass("C","Natural"," ")
{

		setUseTrigger(useTrigger);
		getUseTrigger();
		setUseMute(useMute);
		getUseMute();
	
	}

	Trombone::Trombone(){}

	void Trombone::setUseTrigger(bool usetrigger){

		useTrigger=usetrigger;

	}

	bool Trombone::getUseTrigger(){

		return useTrigger;

	}

	void Trombone::setUseMute(bool usemute){

		useMute=usemute;

	}

	bool Trombone::getUseMute(){

		return useMute;

	}

	void Trombone::playAction(){

		cout << "The trombone player plays the trombone by sliding their slide to corresponding positions." << endl;

	}

	void Trombone::favStyle(string styl){

		if (styl=="swing"){
			cout << "Swing is a trombones favourite style." << endl;
		}
		else{
			cout << "This is not this instruments favourite style." << endl;
		}
	}
