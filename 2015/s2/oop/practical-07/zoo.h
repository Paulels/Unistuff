#include <string>
#include "animal.h"
#include "wolf.h"
#include "dragon.h"

class zoo{ 

public:
   
    zoo(dragon* v1[],wolf* v2[],zookeeper,int ldrag,int lwolf);  //constructors
   
    dragon* vec1[];  //states
	wolf* vec2[];
	std::string zookeeper;
   
    void add(dragon* vect1[],wolf* vect2[], int dnum, int wnum);  //behaviours
};


