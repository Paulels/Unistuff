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
		if(SiTable.count(symbol)==0){
			SiTable.insert(pair<string,int>(symbol,value));
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
			return SiTable.at(symbol);
		}
	}
	void display()					// display contents in an arbitrary order
	{

	}
	void deleteme()					// deletes the symbol table
	{
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
		if(SsTable.count(symbol)==0){
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
			return SsTable.at(symbol);
		}
	}
	void display()					// display contents in an arbitrary order
	{
	}
	void deleteme()					// deletes the symbol table
	{
	}
} ;

symbols_string *symbols_string::newtable()
{
	return new symbols_string_x() ;
}

