#include <string>
#include "Animal.h"
#include "Wolf.h"
#include "Dragon.h"

class Zo0{ 

public:
   
    Zoo(Dragon* v1[],Wolf* v2[],std::string zookeeper,int ldrag,int lwolf);  //constructors
   
    Dragon* vec1[];  //states
	Wolf* vec2[];
	std::string zookeeper;
   
    void add(Dragon* vect1[],Wolf* vect2[], int dnum, int wnum);  //behaviours
};


