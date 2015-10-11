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
		~Saxophone();

		bool setVibrato();
		void getVibrato(bool vibrat);
		void pAct(); //polymorphism from playAction in brass
		void playSax(blah); //unsure
	
};
#endif
