#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <vector>
#include <utility>
#include "jackxml.h"
#include "jacktokens.h"
#ifndef MYPRETTY_PRETTY_H
#define MYPRETTY_PRETTY_H

//Class that will pretty a given jack program using a tokenised version of it

class mypretty_pretty{

	private:

		jackxml *xml;
		jacktokens *tokeniser;
		std::string token;
		std::string tokenclass;
		std::string tokenvalue;
		int indentationCount;
		int lineCount;

		bool have(std::string expected);
		void mustbe(std::string expected);
		void nextToken();
		void lookAhead();
		void finishLine();
		void indentation()

		void prettyClass();
		void prettyClassVarDec();
		void prettyType();
		void prettySubroutineDec();
		void prettyParameterList();
		void prettySubroutineBody();
		void prettyVarDec();
		void prettyClassName();
		void prettySubroutineName();
		void prettyVarName();
		void prettyStatements();
		void prettyStatement();
		void prettyWhileStatement();
		void prettyIfStatement();
		void prettyLetStatement();
		void prettyDoStatement();
		void prettyReturnStatement();
		void prettyExpression();
		void prettyTerm();
		void prettyExpressionList();
		void prettyOp();
		void prettyUnaryOp();
		void prettyKeywordConstant();

	public:

		mypretty_pretty();
		~mypretty_pretty();

		void prettyProgram();

};
#endif //MYPRETTY_PRETTY_H
