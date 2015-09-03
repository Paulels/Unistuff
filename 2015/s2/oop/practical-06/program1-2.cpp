#include <iostream>
#include <math.h>
#include <string>
#include <cstdlib>
using namespace std;

class meerkat{  //copied meerkat class from program1-1 but removed the age part as it was not necessary for this

public:

	meerkat(string meerName);

	string mname;

	string getName();
	void setName(string meerName);
};

void meerkat::setName(string meerName){

	mname=meerName;
}

string meerkat::getName(){

	return mname;
}

meerkat::meerkat(string meerName){

	setName(meerName);
	getName();

}

class cart{ //created my cart to hold my meerkats

public:
   
    cart(meerkat* v1[],int length);  //constructors
   
    meerkat* v2[];  //states
   
    void add(int num,meerkat* vec[]);  //behaviours
};

void cart::add(int n,meerkat* vec[]){
       
	v2[n]=vec[n];  //adding the meerkat to the cart
    if (n<4){
        cout << vec[n]->mname << " has been placed in the cart!" << endl;
    }
    else if (n>=4){  //checking if the cart if full
        cout << vec[n]->mname << " will need to walk since the cart is full!" << endl;
    }
}

cart::cart(meerkat* v1[],int length){

    int l=length;  //knowing how many meerkats to take
   
    for (int i=0;i<l;i++){
        add(i,v1); //running the add function
    }
}

#ifndef WEBSUBMIT
int main(){

	meerkat Bill("Bill");  //initialising the meerkats
	meerkat Jane("Jane");
	meerkat Bob("Bob");
	meerkat Jill("Jill");
	meerkat Rob("Rob");

    meerkat* vec1[5]={&Bill,&Jane,&Bob,&Jill,&Rob};  //creating a vector of pointers to meerkats

    cart Cart1(vec1,5); //creating our cart

   
return 0;
}
#endif //WEBSUBMIT
