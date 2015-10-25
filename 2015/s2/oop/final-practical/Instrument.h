#include <string>
#ifndef INSTRUMENT_H
#define INSTRUMENT_H

class Instrument //top of the inheritance tree
{
	protected:
		bool play;
		bool solo;

	public:

		Instrument(bool play, bool solo);
		Instrument();

		bool getPlay();
		void setPlay(bool a);
		bool getSolo();
		void setSolo(bool b);
		virtual void playAction() =0; //makes instrument an abstract class

};
#endif
