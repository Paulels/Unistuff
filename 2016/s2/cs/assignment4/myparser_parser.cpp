#include <iostream>
#include <stdlib.h>
#include "myparser_parser.h"
#include "jackxml.h"

using namespace std ;

//constructor
myparser_parser::myparser_parser(){

	xml=new jackxml();
	tokeniser = jacktokens::newtokeniser();

	nextToken();
}

//deconstructor
myparser_parser::~myparser_parser(){

}

string myparser_parser::nextToken(){

	token = tokeniser->next_token();
	tokenclass = tokeniser->token_class();
	tokenvalue = tokeniser->token_value();
	return token ;
}

void myparser_parser::mustbe(string expected){

	if(expected!=token){
		exit(-1);
	}
	else{
		xml->open_node(tokenclass);
		xml->node_text(tokenvalue);
		xml->close_node(tokenclass);
		
		nextToken();
	}
}

bool myparser_parser::have(string expected){

	if(expected!=token){
		return false;
	}
	else{
		xml->open_node(tokenclass);
		xml->node_text(tokenvalue);
		xml->close_node(tokenclass);

		nextToken();
		return true;
	}
}

void myparser_parser::lookAhead(){

	if(token!="identifier"){
		exit(-1);
	}

	string savedtoken=token;
	string savedtokenclass=tokenclass;
	string savedtokenvalue=tokenvalue;

	nextToken();

	if(token=="."){
		//xml for class
		have(".");
		parseSubroutineName();
		mustbe("(");
		parseExpressionList();
		mustbe(")");
	}
	else if(token=="["){
		//xml for varname
		mustbe("[");
		parseExpression();
		mustbe("]");
	}
	else if(token=="("){
		//xml for subroutine
		mustbe("(");
		parseExpressionList();
		mustbe(")");
	}
	else{
		parseVarName();
	}
}

void myparser_parser::parseProgram(){

	parseClass();

	xml->flush_output();
}

void myparser_parser::parseClass(){

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

void myparser_parser::parseClassVarDec(){

	parseType();
	parseVarName();
	while(have(",")){
		parseVarName();
	}
	mustbe(";");
}

void myparser_parser::parseType(){

	if(have("int") || have("char") || have("boolean")){
	}
	else{
		parseClassName();
	}
}

void myparser_parser::parseSubroutineDec(){

	if(have("void")){
	}
	else{
		parseType();
	}
	parseSubroutineName();
	mustbe("(");
	parseParameterList();
	mustbe(")");
	parseSubroutineBody();
}

void myparser_parser::parseParameterList(){

	if(token!=")"){
		parseType();
		parseVarName();
		while(have(",")){
			parseType();
			parseVarName();
		}
	}	
}

void myparser_parser::parseSubroutineBody(){

	mustbe("{");
	while(have("var")){
		parseVarDec();
	}
	parseStatements();
	mustbe("}");
}

void myparser_parser::parseVarDec(){

	parseType();
	parseVarName();
	while(have(",")){
		parseVarName();
	}
	mustbe(";");	
}

void myparser_parser::parseClassName(){

	mustbe("identifier");
}

void myparser_parser::parseSubroutineName(){

	mustbe("identifier");
}

void myparser_parser::parseVarName(){

	mustbe("identifier");
}
		
void myparser_parser::parseStatements(){

	while(have("let") || have("if") || have("while") || have("do") || have("return")){
		parseStatement();
	}
}

void myparser_parser::parseStatement(){

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

void myparser_parser::parseWhileStatement(){

	mustbe("(");
	parseExpression();
	mustbe(")");
	mustbe("{");
	parseStatements();
	mustbe("}");
	
}

void myparser_parser::parseIfStatement(){

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

void myparser_parser::parseLetStatement(){

	parseVarName();
	if(have("[")){
		parseExpression();
		mustbe("]");
	}
	mustbe("=");
	parseExpression();
	mustbe(";");
}
		
void myparser_parser::parseDoStatement(){

	lookAhead();
	mustbe(";");
}

void myparser_parser::parseReturnStatement(){

	if(token!=";"){
		parseExpression();
	}
	mustbe(";");
}
void myparser_parser::parseExpression(){

	parseTerm();
	while(token=="+" || token=="-" || token=="*" || token=="/" || token=="&" || token=="|" || token=="<" || token==">" || token=="="){
		parseTerm();
	}
}

void myparser_parser::parseTerm(){

	if(tokenclass=="stringConstant" || tokenclass=="integerConstant" || tokenclass=="keyword"){
		//xml stuff
	}
	else if(have("(")){
		parseExpression();
	}
	else if(token=="~" || token=="-"){
		parseUnaryOp();
		parseTerm();
	}
	else{
		lookAhead();
	}
}

void myparser_parser::parseExpressionList(){

	if(token!=")"){
		parseExpression();
		while(have(",")){
			parseExpression();
		}
	}
}

void myparser_parser::parseOp(){

	if(!(have("+") || have("-") || have("*") || have("/") || have("&") || have("|") || have("<") || have(">"))){
		mustbe("=");		
	}
}

void myparser_parser::parseUnaryOp(){

	if(!have("-")){
		mustbe("-");
	}
}

void myparser_parser::	parseKeywordConstant(){

	if(tokenvalue=="true"){
		//xml
	}
	else if(tokenvalue=="false"){
		//xml
	}
	else if(tokenvalue=="null"){
		//xml
	}
	else{
		//must be tokenvalue=="this"
	}
}



