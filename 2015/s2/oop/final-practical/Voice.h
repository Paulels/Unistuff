#include <string>
#ifndef VOICE_H
#define VOICE_H
#include "Instrument.h"

class Voice:public Instrument //inheritance
{
	protected:
		std::string vType; //states
		std::string vNote;

	public:
		Voice(std::string vType,std::string vNote); //constructors
		Voice();

		std::string getVType();  //behaviours
		void setVType(std::string vt);
		std::string getVnote();
		void setVnote(std::string vn);
		void drink(std::string liquid, int length);
		void playAction();  //polymorphic behaviour

};
#endif
