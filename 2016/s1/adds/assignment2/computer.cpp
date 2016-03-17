#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "computer.h"
using namespace std;

computer::computer(){
	move='R'; //Dumb computer only plays rock
}

char computer::getMove(){
	return move;
};
