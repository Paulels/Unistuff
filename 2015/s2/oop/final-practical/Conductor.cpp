#include <iostream>
#include <string>
#include "Conductor.h"
using namespace std;


	Conductor::Conductor(string cName,int cAge)
{

		setCName(cName);
		getCName();
		setCAge(cAge);
		getCAge();
	
	}

	Conductor::Conductor(){}

	void Conductor::setCName(string cname){

		cName=cname;

	}

	string Conductor::getCName(){

		return cName;

	}

	void Conductor::setCAge(int cage){

		cAge=cage;

	}

	int Conductor::getCAge(){

		return cAge;

	}
