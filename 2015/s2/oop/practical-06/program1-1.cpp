#include <iostream>
#include <math.h>
#include <string>
#include <cstdlib>
using namespace std;

class meerkat{ //class of meerkats

public:

	meerkat(string meerName, int meerAge);  //constuctor

	string mname; //states
	int mage;

	string getName();  //behaviours
	int getAge();
	void setName(string meerName);
	void setAge(int meerAge);

	~meerkat();  //deconstructor
};

void meerkat::setName(string meerName){  //function to set meerkats name

	mname=meerName;
}

void meerkat::setAge(int meerAge){  //function to set meerkats age

	mage=meerAge;
}

string meerkat::getName(){  //function to return meerkats name

	return mname;
}

int meerkat::getAge(){  //function to return meerkats age

	return mage;
}

meerkat::meerkat(string meerName, int meerAge){  //building the meerkat object with a certain name and age

	setName(meerName);
	getName();
	setAge(meerAge);
	getAge();
}

#ifndef WEBSUBMIT
int main(){

	meerkat *Bill=new meerkat("Bill", 12);  //creating my meerkats
	meerkat *Bob=new meerkat("Bob", 1);
	meerkat *Jill=new meerkat("Jill", 5);
	meerkat *Jane=new meerkat("Jane", 8);

	cout << Bill->mname << " " << Bill->mage << endl;  //printing my meerkats names and ages
	cout << Bob->mname << " " << Bob->mage << endl;
	cout << Jill->mname << " " << Jill->mage << endl;
	cout << Jane->mname << " " << Jane->mage << endl;

return 0;
}
#endif //WEBSUBMIT
