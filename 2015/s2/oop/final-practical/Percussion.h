#include <string>
#ifndef PERCUSSION_H
#define PERCUSSION_H
#include "Instrument.h"

class Percussion:public Instrument
{
	protected:
		std::string instrument; //states

	public:
		Percussion(std::string instrument); //constructors
		Percussion();

		std::string getInstrument();
		void setInstrument(std::string i);
		void playAction();

};
#endif
