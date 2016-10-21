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

class myparser_parser{

	public:

		jackxml *xml;
		jacktokens *tokeniser;
		std::string token;
		std::string tokenclass;
		std::string tokenvalue;

		myparser_parser();
		~myparser_parser();

		bool have(std::string expected);
		void mustbe(std::string expected);
		void nextToken();
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

//	private:


};
#endif //MYPARSER_PARSER_H
