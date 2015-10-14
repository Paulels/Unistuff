#include <string>
#ifndef BRASS_H
#define BRASS_H
#include "Instrument.h"

class Brass:public Instrument
{
	protected:
		std::string bNote;
		std::string bType;
		std::string playAction;

	public:

		Brass::Brass(){};

		std::string getBNote();
		void setBNote(std::string bn);
		std::string getBType();
		std::string getPlayAction();
		//virtual????????????
	
};
#endif
