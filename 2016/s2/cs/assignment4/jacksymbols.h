#ifndef JACK_SYMBOLS_H
#define JACK_SYMBOLS_H

#include <string>

class symbols_int        // string to int symbol table
{
public:
        static symbols_int *newtable() ;				// create a new empty symbol table
        virtual bool insert(std::string symbol,int value) =0;		// returns false for duplicate symbol
        virtual int lookup(std::string symbol) =0;			// returns -1 for undefined symbol
	virtual void display() =0;					// display contents in an arbitrary order
	virtual void deleteme() =0;					// deletes the symbol table
} ;

class symbols_string     // string to string symbol table
{
public:
        static symbols_string *newtable() ;				// create a new empty symbol table
        virtual bool insert(std::string symbol,std::string value) =0;	// returns false for duplicate symbol
        virtual std::string lookup(std::string symbol) =0;		// returns "" for undefined symbol
	virtual void display() =0;					// display contents in an arbitrary order
	virtual void deleteme() =0;					// deletes the symbol table
} ;

class jack_var		// class for a jack variable's info in a symbol table
{
public:
	jack_var() ;							// default constructor
									// allow for all four values on creation
	jack_var(std::string symbol,std::string kind,std::string segment,int offset) ;
	std::string symbol ;						// variable's name
	std::string kind ;						// variable's class
	std::string segment ;						// segment where variable is stored
	int offset ;							// variable's offset in its segment
} ;

class symbols_var	// string to jack_var symbol table
{
public:
        static symbols_var *newtable() ;				// create a new empty symbol table
        virtual bool insert(std::string symbol,jack_var value) =0;	// returns false for duplicate symbol
        virtual jack_var lookup(std::string symbol) =0;			// returns var with name "" for undefined symbol
	virtual void display() =0;					// display contents in an arbitrary order
	virtual void deleteme() =0;					// deletes the symbol table
} ;

#endif //JACK_SYMBOLS_H
