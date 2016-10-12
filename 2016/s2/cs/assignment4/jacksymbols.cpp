// a skeleton of the symbols class file

#include "jacksymbols.h"
#include <iostream>

using namespace std ;

// define your own class to implement symbols_int
class symbols_int_x : public symbols_int
{
        bool insert(string symbol,int value)		// returns false for duplicate symbol
	{
		return false ;
	}
        int lookup(string symbol)			// returns -1 for undefined symbol
	{
		return -1 ;
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
	// remember to include definitions of all the inherited pure virtual functions
        bool insert(string symbol,string value)		// returns false for duplicate symbol
	{
		return false ;
	}
        string lookup(string symbol)			// returns "" for undefined symbol
	{
		return "" ;
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

// define your own class to implement symbols_var
class symbols_var_x : public symbols_var
{
	// remember to include definitions of all the inherited pure virtual functions
        bool insert(string symbol,jack_var value)	// returns false for duplicate symbol
	{
		return false ;
	}
        jack_var lookup(string symbol)			// returns var with name "" for undefined symbol
	{
		return jack_var("","","",0) ;
	}
	void display()					// display contents in an arbitrary order
	{
	}
	void deleteme()					// deletes the symbol table
	{
	}
} ;

symbols_var *symbols_var::newtable()
{
	return new symbols_var_x() ;
}

// jack_var default constructor 
jack_var::jack_var() {}

// jack_var constructor - supply all four values on creation
jack_var::jack_var(string symbol,string kind,string segment,int offset) : symbol(symbol),kind(kind),segment(segment),offset(offset) {}
