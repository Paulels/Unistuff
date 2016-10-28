#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <vector>
#include <utility>
#include <map>
#include "jackxml.h"
#include "jacktokens.h"
#ifndef MYPRETTY_PRETTY_H
#define MYPRETTY_PRETTY_H

//Class that will print a given jack program using a tokenised version of it

class mypretty_pretty{

	private:

		jackxml *xml;
		jacktokens *tokeniser;
		std::string token;
		std::string tokenclass;
		std::string tokenvalue;
		int indentationCount;
		int savedIndentationCount;
		int lineCount;
		std::map<std::string,std::string> statics;
		std::map<std::string,std::string> fields;
		std::map<std::string,std::string> vars;
		std::string savedtoken;
		std::string savedtokenclass;
		std::string savedtokenvalue;

		bool have(std::string expected);
		void mustbe(std::string expected);
		void nextToken();
		void lookAhead();
		void finishLine();
		void indentation();

		void printClass();
		void printClassVarDec();
		void printType();
		void printSubroutineDec();
		void printParameterList();
		void printSubroutineBody();
		void printVarDec();
		void printClassName();
		void printSubroutineName();
		void printVarName();
		void printStatements();
		void printStatement();
		void printWhileStatement();
		void printIfStatement();
		void printLetStatement();
		void printDoStatement();
		void printReturnStatement();
		void printExpression();
		void printTerm();
		void printExpressionList();
		void printOp();
		void printUnaryOp();
		void printKeywordConstant();

	public:

		mypretty_pretty();
		~mypretty_pretty();

		void printProgram();

};
#endif //MYPRETTY_PRETTY_H
