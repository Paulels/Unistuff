#include <string>
#ifndef SAXOPHONE_H
#define SAXOPHONE_H
#include "Brass.h"

class Saxophone:public Brass
{
	protected:
		bool vibrato;

	public:
		Saxophone(bool vibrato);
		Saxophone();

		void setVibrato(bool vibrat);
		bool getVibrato();
		void playAction();
	
};
#endif
