#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <vector>
#include <utility>
#include "jackxml.h"
#include "jacktokens.h"
#ifndef MYPARSER_PARSER_H
#define MYPARSER_PARSER_H

//This is my class to parse from tokens to strings and will deal with populating the symbol table
//I am going to store the parsed instructions in a vector of pairs

class myparser_parser{

	public:

		myparser_parser();
		~myparser_parser();

		bool have(std::string expected);
		void mustbe(std::string expected);
		std::string nextToken();
		void lookAhead();

		void parseProgram();
		void parseClass();
		void parseClassVarDec();
		void parseType();
		void parseSubroutineDec();
		void parseParameterList();
		void parseSubroutineBody();
		void parseVarDec();
		void parseClassName();
		void parseSubroutineName();
		void parseVarName();
		void parseStatements();
		void parseStatement();
		void parseWhileStatement();
		void parseIfStatement();
		void parseLetStatement();
		void parseDoStatement();
		void parseReturnStatement();
		void parseExpression();
		void parseTerm();
		void parseExpressionList();
		void parseOp();
		void parseUnaryOp();
		void parseKeywordConstant();

	private:

		jackxml *xml;
		jacktokens *tokeniser;
		std::string token;
		std::string tokenclass;
		std::string tokenvalue;


};
#endif //MYPARSER_PARSER_H
