#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "GameController.h"
using namespace std;

GameController::GameController(){

}

void GameController::play(human h,computer c,referee r,int y){
	r.playGame(h,c,y);
};
