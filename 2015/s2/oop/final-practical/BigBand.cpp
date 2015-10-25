#include <iostream>
#include <string>
#include "BigBand.h"
using namespace std;

		BigBand::BigBand(Trombone* tromSec[],Trumpet* trumSec[],Drums* drum,Percussion* percussion,Piano* piano,Guitar* guitar,Saxophone* saxSec[],Voice* voiceSec[],Conductor* cond,string name,string songName){
		settrom(tromSec);
		settrum(trumSec);
		setdrum(drum);
		setpercussion(percussion);
		setpiano(piano);
		setguitar(guitar);
		setsaxophone(saxSec);
		setvoice(voiceSec);
		setconductor(cond);
		setName(name);
		getName();
		setSName(songName);
		getSName();
}
//Constructor with only set functions fo all of the instruments because get functions were not necessary in this instance because I was creating them in the main

		BigBand::BigBand(){}
		
		string BigBand::getName(){
			return name;
}
		void BigBand::setName(string n){
			name=n;
}
		string BigBand::getSName(){
			return songName;
}
		void BigBand::setSName(string sn){
			songName=sn;
}

		void BigBand::settrom(Trombone* tromsec[4]){  //takes in an array and sets the section by copying the array
			for(int i=0;i<4;i++){ 
				tromSec[i]=tromsec[i];
}
}

		void BigBand::settrum(Trumpet* trumsec[4]){
			for(int i=0;i<4;i++){
				trumSec[i]=trumsec[i];
}
}

		void BigBand::setdrum(Drums* drums){
			drum=drums;
}

		void BigBand::setpercussion(Percussion* perc){
			percussion=perc;
}

		void BigBand::setpiano(Piano* pia){
			piano=pia;
}

		void BigBand::setguitar(Guitar* gui){
			guitar=gui;
}

		void BigBand::setsaxophone(Saxophone* saxsec[5]){
			for(int i=0;i<5;i++){
				saxSec[i]=saxsec[i];
}
}

		void BigBand::setvoice(Voice* voicesec[4]){
			for(int i=0;i<4;i++){
				voiceSec[i]=voicesec[i];
}
}
		void BigBand::setconductor(Conductor* con){
			cond=con;
}



		void BigBand::playstyle(string sty, Drums* a){
			if (sty==" "){  //Checks for blank case
				cout << "Invalid style so the style was set to jazz." << endl;
				sty="jazz";
			}
			if (sty==a->getStyle()){  //Checks if styles are the same
				cout << "The band is already playing in this style" << endl;
}
			else{
				a->setStyle(sty);  //changes style in drums if the styles are different
				cout << "The drumming style was changed to " << sty << " and therefore so was the bands" << endl;
}
}
