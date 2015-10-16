#include <string>
#ifndef BIGBAND_H
#define BIGBAND_H
#include "Saxophone.h"
#include "Brass.h"
#include "Instrument.h"
#include "Trumpet.h"
#include "Trombone.h"
#include "Guitar.h"
#include "Percussion.h"
#include "Piano.h"
#include "Drums.h"
#include "Voice.h"
#include "Conductor.h"

class BigBand
{
	private:
		Trombone* tromSec[];
		Trumpet* trumSec[];
		Drums* drum;
		Percussion* percussion;
		Piano* piano;
		Guitar* guitar;
		Saxophone* saxSec[];
		Voice* voiceSec[];
		std::string name;
		std::string songName;

	public:
		BigBand(Trombone* tromSec[],Trumpet* trumSec[],Drums* drum,Percussion* percussion,Piano* piano,Guitar* guitar,Saxophone* saxSec[],Voice* voiceSec[],std::string name,std::string songName);
		BigBand();
		~BigBand();
		
		std::string getName();
		void setName(std::string n);
		std::string getSName();
		void setSName(std::string sn);
};
#endif
