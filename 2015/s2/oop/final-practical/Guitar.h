#include <string>
#ifndef GUITAR_H
#define GUITAR_H
#include "Instrument.h"

class Guitar:public Instrument
{
	protected:
		std::string gChord();

	public:
		Guitar(std::string gChord);
		Guitar();
		~Guitar();

		std::string getGChord();
		void setGChord(std::string gc);
		void stateGChord(blah); //confused
	
};
#endif
