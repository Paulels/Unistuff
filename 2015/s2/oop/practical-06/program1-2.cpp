#include <iostream>
#include <math.h>
#include <string>
#include <cstdlib>
using namespace std;

int count=0;

class meerkat{
public:
	meerkat(string meerName);
	string mname;
	string getName();
	void setName(string meerName);
	~meerkat();
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

class cart{
public:
	cart(meerkat vec[4]);

	meerkat vector[4];

	void add(meerkat a);

~cart();
};

void cart::add(meerkat a){
if(count<4){
	vector[count]=a;
cout << vector[count].mname << " has been added to the cart." << endl;
}
else if(count>3){
cout << a.mname << " will be walking since the cart is full." << endl;
}
count ++;
}

cart::cart(meerkat vec[4]){
int count=0;
int i=0;
for(i=0;i<4;i++){
add(vec[i]);
}
}


#ifndef WEBSUBMIT
int main(){   

//meerkat *Bill=new meerkat("Bill");
//meerkat *Bob=new meerkat("Bob");
//meerkat *Jill=new meerkat("Jill");
//meerkat *Jane=new meerkat("Jane");
meerkat Bill("Bill");
meerkat Bob("Bob");
meerkat Jill("Jill");
meerkat Jane("Jane");
meerkat vec[4]={Bill,Bob,Jill,Jane};
cart Cart1(vec[4]);
return 0;
}
#endif //WEBSUBMIT
