#include <string>
#ifndef SAXOPHONE_H
#define SAXOPHONE_H
#include "Brass.h"

class Saxophone:public Brass //inherits from brass which inherits from instrument
{
	protected:
		bool vibrato;

	public:
		Saxophone(bool vibrato);
		Saxophone();

		void setVibrato(bool vibrat);
		bool getVibrato();
		void playAction();
		void favStyle(std::string styl);
	
};
#endif
