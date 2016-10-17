#ifndef JACK_TOKENS_H
#define JACK_TOKENS_H
#include <string>

// the jacktokens class reads Jack tokens from cin
// next_token() returns integers, strings and identifiers as their class
// next_token() returns all other tokens as their value
class jacktokens
{
public:
        static jacktokens *newtokeniser() ;	// create a new tokeniser to read from cin
        virtual std::string next_token() =0;	// read the next token from the input and return its kind
        virtual std::string token_class() =0;	// return the current token class as a string
        virtual std::string token_value() =0;	// return the current token as a string
};
#endif //JACK_TOKENS_H

