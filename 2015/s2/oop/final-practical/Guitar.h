#include <string>
#ifndef GUITAR_H
#define GUITAR_H
#include "Instrument.h"

class Guitar:public Instrument
{
	protected:
		std::string gChord;

	public:
		Guitar(std::string gChord);
		Guitar();

		std::string getGChord();
		void setGChord(std::string gc);
	
};
#endif
