#ifndef WK_TOKENS_H
#define WK_TOKENS_H
#include <string>

// the wktokens class reads Jack like tokens from cin
// note, token class returned for a keyword or symbol is the actual keyword or symbol
class wktokens
{
public:
        static wktokens *newtokeniser() ;	// create a new tokeniser to read from cin
        virtual std::string next_token() =0;	// read the next token from the input and return its kind
        virtual std::string token_class() =0;	// return the current token class as a string
        virtual std::string token_value() =0;	// return the current token as a string
};
#endif //WK_TOKENS_H

