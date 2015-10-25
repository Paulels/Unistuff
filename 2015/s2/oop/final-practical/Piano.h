#include <string>
#ifndef PIANO_H
#define PIANO_H
#include "Instrument.h"

class Piano:public Instrument
{
	protected:
		std::string pChord;

	public:
		Piano(std::string pChord);
		Piano();

		std::string getPChord();
		void setPChord(std::string pc);
		void playAction();
	
};
#endif
