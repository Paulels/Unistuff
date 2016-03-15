#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "referee.h"
using namespace std;

referee::referee(){

}

void referee::setNumberOfGames(char c){
	int x=c-'0';
	numberOfGames=x;

};

int referee::getNumberOfGames(){
	return numberOfGames;
};

void referee::playGame(human H,computer C,int y){
	int i=0;
	int j=0;
	int t=0;
	while(i<y){
		j=(2*i);
		if(C.getMove()=='R'){
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
		if(i<(y-1)){
			cout<<" ";
		}
		if(i==(y-1)){
		cout<<"\n";
		}
		i++;
	}

};
