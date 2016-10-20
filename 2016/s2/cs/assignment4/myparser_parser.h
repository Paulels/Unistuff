#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <vector>
#include <utility>
#include "jacktokens.h"
#ifndef MYPARSER_H
#define MYPARSER_H

//This is my class to parse from tokens to strings and will deal with populating the symbol table
//I am going to store the parsed instructions in a vector of pairs

class myParser{

	public:

		myParser();
		~myParser();

		bool have(std::string expected)
		void mustbe(std::string expected)
		std::string nextToken()

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
		void parseReturnSequence();
		void parseExpression();
		void parseTerm();
		void parseExprssionList();
		void parseOp();
		void parseUnaryOp();
		void parseKeywordConstant();

	private:

		static jacktokens *tokeniser;
		static std::string token;
		static std::string tokenclass;
		static std::string tokenvalue;


};
#endif //MYPARSER_H
