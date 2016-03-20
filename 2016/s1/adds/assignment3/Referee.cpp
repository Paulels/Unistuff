#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Referee.h"
using namespace std;

Referee::Referee(){

}

void Referee::setNumberOfGames(char c){
	int x=c-'0'; //subtracts the ascii number for 0 to make it an integer equal to its actual value
	numberOfGames=x;

};

int Referee::getNumberOfGames(){
	return numberOfGames;
};

void Referee::playGame(human H,computer C,int y){
	int i=0;
	int j=0;
	while(i<y){ //runs for amount of games inputted
		j=(2*i);
		if(C.getMove()=='R'){ //checks with who plays what and outputs whether they won, lost or tied
			if(H.getMoves(j)=='R'){
				cout<<"T";
			}
			else if(H.getMoves(j)=='P'){
				cout<<"W";
			}
			else if(H.getMoves(j)=='S'){
				cout<<"L";
			}
		}
		else if(C.getMove()=='P'){
			if(H.getMoves(j)=='R'){
				cout<<"L";
			}
			else if(H.getMoves(j)=='P'){
				cout<<"T";
			}
			else if(H.getMoves(j)=='S'){
				cout<<"W";
			}
		}
		else if(C.getMove()=='S'){
			if(H.getMoves(j)=='R'){
				cout<<"W";
			}
			else if(H.getMoves(j)=='P'){
				cout<<"L";
			}
			else if(H.getMoves(j)=='S'){
				cout<<"T";
			}
		}
		if(i<(y-1)){ //inputting space between results
			cout<<" ";
		}
		if(i==(y-1)){ //prints a new line after all rounds
		cout<<"\n";
		}
		i++;
	}

};
