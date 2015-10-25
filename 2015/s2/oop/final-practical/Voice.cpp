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

	void Voice::drink(string liquid, int length){

		cout << "The signer takes a drink of " << liquid << " for " << length << " seconds to freshen up their vocal chords." << endl;

	}

	void Voice::playAction(){

		cout << "The voice player sings by using their vocal chords." << endl;

	}
