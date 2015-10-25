#include <string>
#ifndef GUITAR_H
#define GUITAR_H
#include "Instrument.h"

class Guitar:public Instrument //inheritance
{
	protected:
		std::string gChord;

	public:
		Guitar(std::string gChord);
		Guitar();

		std::string getGChord(); //behaviours
		void setGChord(std::string gc);
		void playAction();
	
};
#endif
