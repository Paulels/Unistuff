#include <iostream>
#include <math.h>
#include <string>
#include <cstdlib>
using namespace std;

class aircraft{  //creating the super class

public:

	aircraft();  //constructors
	aircraft(string callsign, string direction, int flightlevel, int groundspeed);

	string callSign;  //states common to all aircraft
	string heading;
	int flightLevel;
	int groundSpeed;

	string getheading();  //behaviours
	string getcallsign();
	int getflightlevel();
	int getgroundspeed();
	void setcallsign(string callsign);
	void setheading(string direction);
	void setflightlevel(int flightlevel);
	void setgroundspeed(int groundspeed);
};

class fixedWing: public aircraft{  //class which is using the super class

public:

	fixedWing(int carg, int run);  //unique constructor

	int cargo;  //unique states
	int runway;

	int getcargo();  //unique behaviours
	int getrunway();
	void setcargo(int carg);
	void setrunway(int run);
};

class rotaryWing: public aircraft{  //same situation as fixedWing

public:

	rotaryWing(int pad, string phealth);

	int heliPad;
	string health;

	int gethelipad();
	string gethealth();
	void sethelipad(int pad);
	void sethealth(string phealth);
};

//General behaviours for aircraft

void aircraft::setcallsign(string callsign){

	callSign=callsign;
}

void aircraft::setheading(string direction){

	heading=direction;
}

void aircraft::setflightlevel(int flightlevel){

	flightLevel=flightlevel;
}

void aircraft::setgroundspeed(int groundspeed){

	groundSpeed=groundspeed;
}

string aircraft::getcallsign(){

	return callSign;
}

string aircraft::getheading(){

	return heading;
}

int aircraft::getflightlevel(){

	return flightLevel;
}

int aircraft::getgroundspeed(){

	return groundSpeed;
}

void fixedWing::setcargo(int carg){ 

	if(carg>130000){  //checking if carg exceeds maximum limit
		cout << carg << " exceeds the maximum weight for cargo. Some will be removed and only 130000 will be flown." << endl;
		carg=130000;  //setting carg to maximum limit
		cargo=carg;  //setting the state cargo to carg
	}
	else if(carg<=130000){
		cargo=carg;
	}
}

void fixedWing::setrunway(int run){

	if(run<1000){  //checking runway length
		cout << run << " Is too short to take off or land so the plane will be moved to a longer runway." << endl;
		run=1000;
		runway=run;
	}
	else if(run>=1000){
		runway=run;
	}
}

int fixedWing::getcargo(){

	return cargo;
}

int fixedWing::getrunway(){

	return runway;
}

void rotaryWing::sethelipad(int pad){

	if(pad<10){  //checking helipad radius
		cout << pad << " is too small to land on so a different helipad will be landed on." << endl;
		pad=10;
		heliPad=pad;
	}
	else if(pad>=10){
		heliPad=pad;
	}
}

void rotaryWing::sethealth(string phealth){
	
	if(phealth=="good"){  //checking what phealth is
		if(callSign=="Normal"){  //setting the callsign based off of what phealth is
			health=phealth;
		}
		else if(callSign=="Emergency"){
			setcallsign("Normal");
			health=phealth;
		}
	}
	else if(phealth=="bad"){
		if(callSign=="Emergency"){
			health=phealth;
		}
		else if(callSign=="Normal"){
			setcallsign("Emergency");
			health=phealth;
		}
	}
}

int rotaryWing::gethelipad(){

	return heliPad;
}

string rotaryWing::gethealth(){

	return health;
}

aircraft::aircraft(){} //default constructor

aircraft::aircraft(string callsign, string direction, int flightlevel, int groundspeed){

	setcallsign(callsign);	//running all the behaviours
	setheading(direction);
	setflightlevel(flightlevel);
	setgroundspeed(groundspeed);	
	getheading();
	getcallsign();
	getflightlevel();
	getgroundspeed();
}

rotaryWing::rotaryWing(int pad, string phealth):aircraft("Normal", "North", 1000, 500){  //assigning generic things to the aircraft class states for all rotaryWing

	sethelipad(pad);
	gethelipad();
	sethealth(phealth);
	gethealth();
}


fixedWing::fixedWing(int carg, int run):aircraft("Normal", "West", 100, 50){

	setcargo(carg);
	getcargo();
	setrunway(run);
	getrunway();

}


#ifndef WEBSUBMIT
int main(){

	fixedWing A1(100000,100); //initialising my two aircraft
	rotaryWing H1(10,"bad");

A1.heading="south";
 cout << A1.heading << endl;

	cout << H1.heading << H1.health << A1.callSign << A1.cargo << H1.callSign << endl;  //checking to see variables were as they should be

return 0;
}
#endif //WEBSUBMIT
