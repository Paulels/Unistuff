#include <string>
#ifndef INSTRUMENT_H
#define INSTRUMENT_H

class Instrument
{
	protected:
		bool play;
		bool solo;

	public:

		bool getPlay();
		void setPlay(bool a);
		bool getSolo();
		void setSolo(bool b);
		//virtual 
	
};
#endif
