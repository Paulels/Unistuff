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
		~Voice();

		std::string getVType();
		std::string getVnote();
		void setVnote(std::string vn);
		//void playVocal(std::string vtype, std::sting vnote);????

};
#endif
