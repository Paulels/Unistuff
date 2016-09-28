// a skeleton of the asmsymbols class file

#include "asmsymbols.h"
#include <iostream>
#include <map>

using namespace std ;

// define your own class to implement symbols_int
class symbols_int_x : public symbols_int
{
	map<string,int> SiTable;

        bool insert(string symbol,int value)		// returns false for duplicate symbol
	{
		if(SiTable.count(symbol)==0){				//inserts it if not found
			SiTable.insert(pair<string,int>(symbol,value));
			return true;
		}
		else{
			return false;
		}
	}
        int lookup(string symbol)			// returns -1 for undefined symbol
	{
		if(SiTable.count(symbol)==0){
			return -1;
		}
		else{
			return SiTable.at(symbol);		//returns it if it is in there
		}
	}
	void display()					// display contents in an arbitrary order
	{
		for(map<string,int>::iterator it=SiTable.begin(); it!=SiTable.end();++it){
			cout<<it->first<<' '<<it->second<<endl;
		}
	}
	void deleteme()					// deletes the symbol table
	{
		SiTable.clear();
	}
} ;

symbols_int *symbols_int::newtable()
{
	
	return new symbols_int_x() ;
}

// define your own class to implement symbols_string
class symbols_string_x : public symbols_string
{
	map<string,string> SsTable;

	// remember to include definitions of all the inherited pure virtual functions
        bool insert(string symbol,string value)		// returns false for duplicate symbol
	{
		if(SsTable.count(symbol)==0){				//inserts it if not found
			SsTable.insert(pair<string,string>(symbol,value));
		}
		else{
			return false;
		}
	}
        string lookup(string symbol)			// returns "" for undefined symbol
	{
		if(SsTable.count(symbol)==0){
			return "";
		}
		else{
			return SsTable.at(symbol);		//returns it if it is in there
		}
	}
	void display()					// display contents in an arbitrary order
	{
		for(map<string,string>::iterator it=SsTable.begin(); it!=SsTable.end();++it){
			cout<<it->first<<' '<<it->second<<endl;
		}
	}
	void deleteme()					// deletes the symbol table
	{
		SsTable.clear();
	}
} ;

symbols_string *symbols_string::newtable()
{
	return new symbols_string_x() ;
}

