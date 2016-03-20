#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Computer.h"
using namespace std;

Computer::Computer(){
	move='R'; //Dumb computer only plays rock
}

char Computer::getMove(){
	return move;
};
