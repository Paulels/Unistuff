#include <string>
#ifndef PERCUSSION_H
#define PERCUSSION_H
#include "Instrument.h"

class Percussion:public Instrument
{
	protected:
		std::string instrument;

	public:
		Percussion(std::string instrument);
		Percussion();

		std::string getInstrument();
		void setInstrument(std::string i);

};
#endif
