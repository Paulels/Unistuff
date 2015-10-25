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

		std::string getPChord(); //used to return the states value
		void setPChord(std::string pc); //used to change the state
		void playAction();
	
};
#endif
