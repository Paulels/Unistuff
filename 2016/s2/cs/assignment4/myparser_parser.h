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

//Class that will parse a given jack program using a tokenised version of it

class myparser_parser{

	private:

		jackxml *xml;
		jacktokens *tokeniser;
		std::string token;
		std::string tokenclass;
		std::string tokenvalue;

		bool have(std::string expected);
		void mustbe(std::string expected);
		void nextToken();
		void lookAhead();

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

	public:

		myparser_parser();
		~myparser_parser();

		void parseProgram();

};
#endif //MYPARSER_PARSER_H
