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

		void setUseMute(bool usemute);
		bool getUseMute();
		void playAction();
		void favStyle(std::string styl);

};
#endif
