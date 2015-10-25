#include <string>
#ifndef DRUMS_H
#define DRUMS_H
#include "Instrument.h"

class Drums:public Instrument
{
	protected: //proctected so only things in the inheritance tree can access it directly
		std::string style;

	public:
		Drums(std::string style); //constructors
		Drums();

		std::string getStyle();
		void setStyle(std::string s);
		void fill();
		void playAction();
	
};
#endif
