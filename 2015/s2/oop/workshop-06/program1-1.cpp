#include <iostream>
#include <math.h>
#include <string>
#include <cstdlib>
using namespace std;

class Person{
public:
	Person(string n, string g
);
	string name;
	string gender;
	string getname()const;
	string getgender()const;
	~Person();
};

Person::Person(string n, string g):name(n),gender(g){

}


string Person::getname() const{
return name;
}

string Person::getgender() const{
return gender;
}

#ifndef WEBSUBMIT
int main(){

Person *Bill=new Person("Bill", "male");
Person *Bob=new Person("Bob","female");
cout << Bill->name << Bill->gender << endl;
cout << Bob->name << Bob->gender << endl;

return 0;
}
#endif //WEBSUBMIT
