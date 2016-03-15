#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "computer.h"
using namespace std;

computer::computer(){
	move='R';
}

char computer::getMove(){
	return move;
};
