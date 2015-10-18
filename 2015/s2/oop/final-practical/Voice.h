#include <string>
#ifndef VOICE_H
#define VOICE_H
#include "Instrument.h"

class Voice:public Instrument
{
	protected:
		std::string vType;
		std::string vNote;

	public:
		Voice(std::string vType,std::string vNote);
		Voice();

		std::string getVType();
		void setVType(std::string vt);
		std::string getVnote();
		void setVnote(std::string vn);

};
#endif
