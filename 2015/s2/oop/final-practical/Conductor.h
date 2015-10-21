#include <string>
#ifndef CONDUCTOR_H
#define CONDUCTOR_H

class Conductor
{
	public:

		Conductor(std::string cName, int cAge);
		Conductor();

		std::string cName;
		int cAge;

		void setCName(std::string cname);
		std::string getCName();		
		void setCAge(int cage);
		int getCAge();
		void beatsInBar(int beats);
	
};
#endif
