#include <string>
#ifndef TROMBONE_H
#define TROMBONE_H
#include "Brass.h"

class Trombone:public Brass 
{
	protected:
		bool useTrigger;  //states which can only be accessed directly by thing within the same inheritance tree
		bool useMute;

	public:
		Trombone(bool useTrigger, bool useMute);
		Trombone();

		void setUseTrigger(bool usetrigger);
		bool getUseTrigger();
		void setUseMute(bool usemute);
		bool getUseMute();
		void playAction();
		void favStyle(std::string styl);
};
#endif
