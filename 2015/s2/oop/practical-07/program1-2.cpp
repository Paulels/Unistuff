#include <iostream>
#include <string>
#include "Wolf.h"
#include "Dragon.h"
#include "Zoo.h"
using namespace std;

#ifndef WEBSUBMIT
int main(){

	Wolf Bill();  
	Wolf Jane();
	Dragon Bob();
	Dragon Jill();

   Wolf* vec1[2]={&Bill,&Jane};  
	Dragon* vec2[2]=[&Bob,&Jill};

    Zoo Your_Zoo(vec2,vec1,"Greg",2,2);

Bill.name="Bill";
Bill.meal_time="7am-10am";
Bill.eat_length="3"
Bill.start_sleep="12pm";
Bill.end_sleep="1am";
Bill.toy="human";
Jane.name="Jane";
Jane.meal_time="10am-1pm";
Jane.eat_length="3"
Jane.start_sleep="11pm";
Jane.end_sleep="4am";
Jane.toy="rock";
Bob.name="Bob";
Bob.meal_time="1pm-4pm";
Bob.eat_length="3"
Bob.start_sleep="4pm";
Bob.end_sleep="1pm";
Bob.toy="mouse";
Jill.name="Jill";
Jill.meal_time="4pm-7pmm";
Jill.eat_length="3"
Jill.start_sleep="8pm";
Jill.end_sleep="7am";
Jill.toy="donkey";

	cout << Bill.name << " eats from " << Bill.meal_time << " which is " << Bill.eat_length << " hours long. He sleeps from " << Bill.start_sleep << " til " << Bill.end_sleep << ". His favourite toy is " << Bill.toy << endl;

	cout << Jane.name << " eats from " << Jane.meal_time << " which is " << Jane.eat_length << " hours long. He sleeps from " << Jane.start_sleep << " til " << Jane.end_sleep << ". His favourite toy is " << Jane.toy << endl;

	cout << Bob.name << " eats from " << Bob.meal_time << " which is " << Bob.eat_length << " hours long. He sleeps from " << Bob.start_sleep << " til " << Bob.end_sleep << ". His favourite toy is " << Bob.toy << endl;

	cout << Jill.name << " eats from " << Jill.meal_time << " which is " << Jill.eat_length << " hours long. He sleeps from " << Jill.start_sleep << " til " << Jill.end_sleep << ". His favourite toy is " << Jill.toy << endl;

   
return 0;
}
#endif //WEBSUBMIT
