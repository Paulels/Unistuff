#include <string>
#ifndef BRASS_H
#define BRASS_H
#include "Instrument.h"

class Brass:public Instrument
{
	protected:
		std::string bNote;
		std::string bType;

	public:

		Brass();

		std::string getBNote();
		void setBNote(std::string bn);
		std::string getBType();
		void setBType(std::string bt);
		virtual void playAction() =0;
	
};
#endif
