#include <string>
#ifndef TRUMPET_H
#define TRUMPET_H
#include "Brass.h"

class Trumpet:public Brass
{
	protected:
		bool useMute;

	public:
		Trumpet(bool useMute);
		Trumpet();

		bool setUseMute();
		void getUseMute(bool usemute);
		void pAct(); //polymorphism from playAction in brass

};
#endif
