#include <iostream>
#include <stdlib.h>
#include "myParser.h"
#include "jackxml.h"

using namespace std ;

//constructor
myParser::myParser(){

	xml=new jackxml();

	tokeniser = NULL ;
	token = "?" ;
	tokenclass = "?" ;
	tokenvalue = "?" ;

}

//deconstructor
myParser::~myParser(){

}

string myParser::nextToken()
{
	token = tokeniser->next_token() ;
	tokenclass = tokeniser->token_class() ;
	tokenvalue = tokeniser->token_value() ;
	return token ;
}

void myParser::mustbe(string expected)
{
	if ( expected != token )
	{
		exit(-1) ;
	}
	(void) nextToken() ;
}

bool myParser::have(string expected)
{
	if ( expected != token ) return false ;
	(void) nextToken() ;
	return true ;
}

void myParser::parseProgram(){

	parseClass();
}

void myParser::parseClass(){

	mustbe("class");
	parseClassName();
	mustbe("{");
	while(have("static") || have("field")){
		parseClassVarDec();
	}
	while(have("constuctor") || have("function") || have("method")){
		parseSubroutineDec();
	}
}

void myParser::parseClassVarDec(){

	parseType();
	parseVarName();
	while(have(",")){
		parseVarName();
	}
	mustbe(";");
}

void myParser::parseType(){		//????????

	if(have("int")){
		//do stuff
	}
	else if(have("int")){
		//do stuff
	}
	else if(have("int")){
		//do stuff
	}
	else{
		parseClassName();
	}
}

void myParser::parseSubroutineDec(){

	if(have("constructor"){
		
	}
	if(
	parseSubroutineName();
	mustbe("(");
	parseParameterList();
	mustbe(")");
	parseSubroutineBody();
}

void myParser::parseParameterList(){		//???????

	if(have("int")
	parseVarName();
	
}

void myParser::parseSubroutineBody(){

	mustbe("{");
	while(have("var")){
		parseVarDec();
	}
	parseStatements();
	mustbe("}");
}

void myParser::parseVarDec(){

	parseType();
	parseVarName();
	while(have(",")){
		parseVarName();
	}
	mustbe(";");	
}

void myParser::parseClassName(){

	mustbe("identifier");
}

void myParser::parseSubroutineName(){

	mustbe("identifier");
}

void myParser::parseVarName(){

	mustbe("identifier");
}
		
void myParser::parseStatements(){

	while(have("let") || have("if") || have("while") || have("do") || have("return")){
		parseStatement();
	}
}

void myParser::parseStatement(){

	if(have("let")){
		parseLetStatement();
	}
	if(have("if")){
		parseIfStatement();
	}
	if(have("while")){
		parseWhileStatement();
	}
	if(have("do")){
		parseDoStatement();
	}
	if(have("return")){
		parseReturnStatement();
	}
}

void myParser::parseWhileStatement(){

	mustbe("(");
	parseExpression();
	mustbe(")");
	mustbe("{");
	parseStatements();
	mustbe("}");
	
}

void myParser::parseIfStatement(){

	mustbe("(");
	parseExpression();
	mustbe(")");
	mustbe("{");
	parseStatements();
	mustbe("}");
	if(have("else")){
		mustbe("{");
		parseStatements();
		mustbe("}");
	}
}

void myParser::parseLetStatement(){

	parseVarName();
	if(have("[")){
		parseExpression();
		mustbe("]");
	}
	mustbe("=");
	parseExpression();
	mustbe(";");
}
		
void myParser::parseDoStatement(){

	if(//??????
	parseSubroutineName();
	mustbe("(");
	parseExpressionList();
	mustbe(")");
	mustbe(";");
}

void myParser::parseReturnSequence(){

	if(//term????){
		parseExpression();
	}
	mustbe(";");
}
void myParser::parseExpression(){

	parseTerm();
	while(have("+") || have("-") || have("*") || have("/") || have("&") || have("|") || have("<") || have(">") || have("=")){
		parseTerm();
	}
}

void myParser::parseTerm(){

	//???????
}

void myParser::parseExprssionList(){

	if(//?????){
		parseExpression();
		while(have(",")){
			parseExpression();
		}
	}
}

void myParser::parseOp(){

	if(have("+")){
		
	}
	if(have("-")){
		
	}
	if(have("*")){
		
	}
	if(have("/")){
		
	}
	if(have("&")){
		
	}
	if(have("|")){
		
	}
	if(have("<")){
		
	}
	if(have(">")){
		
	}
	if(have("=")){
		
	}
}

void myParser::parseUnaryOp(){

	if(have("-")){
		
	}
	if(have("~")){
		
	}
}

void myParser::	parseKeywordConstant(){

	if(have("true")){
		
	}
	if(have("false")){
		
	}
	if(have("null")){
		
	}
	if(have("this")){
		
	}
}



