#include <string>
#ifndef TROMBONE_H
#define TROMBONE_H
#include "Brass.h"

class Trombone:public Brass
{
	protected:
		bool useTrigger;
		bool useMute;

	public:
		Trombone(bool useTrigger, bool useMute);
		Trombone();

		bool setUseTrigger();
		void getUseTrigger(bool usetrigger);
		bool setUseMute();
		void getUseMute(bool usemute);
		void pAct(); //polymorphism from playAction in brass
};
#endif
