#include <iostream>
#include <string>
#include "Instrument.h"
using namespace std;

		Instrument::Instrument(bool t,bool f){ //constructor
			setPlay(t);
			getPlay();
			setSolo(f);
			getSolo();
}

		Instrument::Instrument(){}

		bool Instrument::getPlay(){
			return play;
}
		void Instrument::setPlay(bool a){
			play=a;
}
		bool Instrument::getSolo(){
			return solo;
}
		void Instrument::setSolo(bool b){
			solo=b;
}
