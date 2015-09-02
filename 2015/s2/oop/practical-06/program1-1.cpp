#include <iostream>
#include <math.h>
#include <string>
#include <cstdlib>
using namespace std;

class meerkat{
public:
	meerkat(string meerName, int meerAge);
	string mname;
	int mage;
	string getName();
	int getAge();
	void setName(string meerName);
	void setAge(int meerAge);
	~meerkat();
};

string meerkat::getName(){
return mname;
}

int meerkat::getAge(){
return mage;
}

void meerkat::setName(string meerName){
mname=meerName;
}

void meerkat::setAge(int meerAge){
mage=meerAge;
}

meerkat::meerkat(string meerName, int meerAge){
setName(meerName);
getName();
setAge(meerAge);
getAge();

}

#ifndef WEBSUBMIT
int main(){

meerkat *Bill=new meerkat("Bill", 12);
meerkat *Bob=new meerkat("Bob", 1);
meerkat *Jill=new meerkat("Jill", 5);
meerkat *Jane=new meerkat("Jane", 8);
cout << Bill->mname << Bill->mage << endl;
cout << Bob->mname << Bob->mage << endl;
cout << Jill->mname << Jill->mage << endl;
cout << Jane->mname << Jane->mage << endl;

return 0;
}
#endif //WEBSUBMIT
