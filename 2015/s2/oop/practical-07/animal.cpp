#include <iostream>
#include <string>
#include "animal.h"
using namespace std;



	std::string getname();  
	std::string getmeal_time();
	std::string getstart_sleep();
	std::string getend_sleep();
	std::string gettoy();
	int geteat_length();
	void setname(std::string name1); 
	void setmeal_time(std::string mealtime);  
	void setstart_sleep(std::string startsleep); 
	void setend_sleep(std::string endsleep); 
	void settoy(std::string toy1); 
	void seteat_length(int eatlength); 

	void eat(std::string meal_time, int eat_length);
void sleep(std::string start_sleep, std::string end_sleep);
void play(std::string toy);

animal::animal(){

}
