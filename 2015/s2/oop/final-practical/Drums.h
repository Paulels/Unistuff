#include <string>
#ifndef DRUMS_H
#define DRUMS_H
#include "Instrument.h"

class Drums:public Instrument
{
	public:
		std::string style;

		Drums(std::string style);
		Drums();

		std::string getStyle();
		void setStyle(std::string s);
		void fill();
		void playAction();
	
};
#endif
