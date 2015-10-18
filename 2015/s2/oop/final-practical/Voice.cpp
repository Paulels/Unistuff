#include <iostream>
#include <string>
#include "Voice.h"
using namespace std;

	Voice::Voice(string vType,string vNote):Instrument(true, false)
{

		setVType(vType);
		getVType();
		setVnote(vNote);
		getVnote();
	
	}

	Voice::Voice(){}

	void Voice::setVType(string vt){

		vType=vt;

	}

	string Voice::getVType(){

		return vType;

	}

	void Voice::setVnote(string vn){

		vNote=vn;

	}

	string Voice::getVnote(){

		return vNote;

	}
