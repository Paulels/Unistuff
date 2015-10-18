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

		void setUseTrigger(bool usetrigger);
		bool getUseTrigger();
		void setUseMute(bool usemute);
		bool getUseMute();
		void playAction();
};
#endif
