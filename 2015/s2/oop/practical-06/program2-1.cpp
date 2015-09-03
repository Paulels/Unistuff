#include <iostream>
#include <math.h>
#include <string>
#include <cstdlib>
using namespace std;

class aircraft{
public:
	aircraft(string callSign, string heading, int flightLevel, int groundSpeed);

	string callSign;
	string heading;
	int flightLevel;
	int groundSpeed;

	string getheading();
	string getcallsign();
	int getflightlevel();
	int getgroundspeed();
	void setcallsign(string callsign);
	void setheading(string direction);
void setflightlevel(int level);
void setgroundspeed(int speed);
};

class fixedWing:public aircraft{
public:
	fixedWing();
	int cargo;
	int runway;


};

class rotaryWing:public aircraft{
public:
	rotaryWing();
	int heliPad;
	string health;

};

aircraft::aircraft(string callSign, string heading, int flightLevel, int groundSpeed){


}

#ifndef WEBSUBMIT
int main(){



return 0;
}
#endif //WEBSUBMIT
