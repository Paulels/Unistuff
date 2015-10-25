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
		Conductor* cond;
		std::string name;
		std::string songName;

	public:
		
		BigBand(Trombone* tromSec[4],Trumpet* trumSec[4],Drums* drum,Percussion* percussion,Piano* piano,Guitar* guitar,Saxophone* saxSec[5],Voice* voiceSec[4],Conductor* cond, std::string name,std::string songName);
		BigBand();
		
		std::string getName();
		void setName(std::string n);
		std::string getSName();
		void setSName(std::string sn);

		void settrom(Trombone* tromsec[]);
		void settrum(Trumpet* trumsec[]);
		void setdrum(Drums* drums);
		void setpercussion(Percussion* perc);
		void setpiano(Piano* pia);
		void setguitar(Guitar* gui);
		void setsaxophone(Saxophone* saxsec[]);
		void setvoice(Voice* voicesec[]);
		void setconductor(Conductor* con);

		void playstyle(std::string sty, Drums x); //changes the style drums are playing in

};
#endif
