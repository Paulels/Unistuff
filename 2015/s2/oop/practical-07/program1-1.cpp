#include <iostream>
#include <string>
#include "wolf.cpp"
#include "dragon.cpp"
using namespace std;

#ifndef WEBSUBMIT
int main(){

	wolf Xav();  

	dragon poor();

Xav.name="Bill";
Xav.meal_time="7am-10am";
Xav.eat_length="3"
Xav.start_sleep="12pm";
Xav.end_sleep="1am";
Xav.toy="human";
poor.name="Jane";
poor.meal_time="10am-1pm";
poor.eat_length="3"
poor.start_sleep="11pm";
poor.end_sleep="4am";
poor.toy="rock";

	cout << Xav.name << " eats from " << Xav.meal_time << " which is " << Xav.eat_length << " hours long. He sleeps from " << Xav.start_sleep << " til " << Xav.end_sleep << ". His favourite toy is " << Xav.toy << endl;

	cout << poor.name << " eats from " << poor.meal_time << " which is " << poor.eat_length << " hours long. He sleeps from " << poor.start_sleep << " til " << poor.end_sleep << ". His favourite toy is " << poor.toy << endl;

   
return 0;
}
#endif //WEBSUBMIT
