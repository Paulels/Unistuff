#include <iostream>
#include <stdlib.h>
#include "myparser_parser.h"
#include "jackxml.h"
#include "jacktokens.h"

using namespace std ;

//constructor
myparser_parser::myparser_parser(){

	tokeniser=jacktokens::newtokeniser();
	nextToken();
 
	xml=new jackxml();

}

//deconstructor
myparser_parser::~myparser_parser(){

	delete xml;
}

//To allow us to advance tokens
void myparser_parser::nextToken(){

	token=tokeniser->next_token();
	tokenclass=tokeniser->token_class();
	tokenvalue=tokeniser->token_value();

	return;
}

//checks for something if it has to be there, if it isnt there the prrogam exits and prints nothing
void myparser_parser::mustbe(string expected){

	if(expected!=token){
		exit(0);
	}
	else{
		xml->open_node(tokenclass);
		xml->node_text(tokenvalue);
		xml->close_node(tokenclass);
		
		nextToken();
	}
}

//checks to see if something is there cause it may or may not be 
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

//This is made for do statements and parseterm because you need to look ahead
void myparser_parser::lookAhead(){

	if(token!="identifier"){
		exit(0);
	}

	//to save to allow us to print the previous stuff
	string savedtoken=token;
	string savedtokenclass=tokenclass;
	string savedtokenvalue=tokenvalue;

	nextToken();

	//prints based on what it was
	if(token=="."){
		xml->open_node("className");
		xml->open_node(savedtokenclass);
		xml->node_text(savedtokenvalue);
		xml->close_node(savedtokenclass);
		xml->close_node("className");
		have(".");
		parseSubroutineName();
		mustbe("(");
		parseExpressionList();
		mustbe(")");
	}
	else if(token=="["){
		xml->open_node("varName");
		xml->open_node(savedtokenclass);
		xml->node_text(savedtokenvalue);
		xml->close_node(savedtokenclass);
		xml->close_node("varName");
		mustbe("[");
		parseExpression();
		mustbe("]");
	}
	else if(token=="("){
		xml->open_node("subroutineName");
		xml->open_node(savedtokenclass);
		xml->node_text(savedtokenvalue);
		xml->close_node(savedtokenclass);
		xml->close_node("subroutineName");
		mustbe("(");
		parseExpressionList();
		mustbe(")");
	}
	else{
		xml->open_node("varName");
		xml->open_node(savedtokenclass);
		xml->node_text(savedtokenvalue);
		xml->close_node(savedtokenclass);
		xml->close_node("varName");
	}
}

//base class and what can be called to start the parsing process
void myparser_parser::parseProgram(){

	parseClass();

	xml->flush_output();
}

//Parses a class based on the BNF
void myparser_parser::parseClass(){

	//can do this at the start of most of the function to print the xml
	xml->open_node("class");
	mustbe("class");
	parseClassName();
	mustbe("{");
	while(tokenvalue=="static" || tokenvalue=="field"){
		parseClassVarDec();
	}
	while(tokenvalue=="constructor" || tokenvalue=="function" || tokenvalue=="method"){
		parseSubroutineDec();
	}
	mustbe("}");
	//can do this at the end of most of the functions to print the xml
	xml->close_node("class");
}

////Parses a classVarDec based on the BNF
void myparser_parser::parseClassVarDec(){

	xml->open_node("classVarDec");
	if(have("static") || have("field")){
	}
	parseType();
	parseVarName();
	while(have(",")){
		parseVarName();
	}
	mustbe(";");
	xml->close_node("classVarDec");
}

//Parses a type based on the BNF
void myparser_parser::parseType(){

	xml->open_node("type");
	if(have("int") || have("char") || have("boolean")){
	}
	else{
		parseClassName();
	}
	xml->close_node("type");
}

//Parses a subroutineDec based on the BNF
void myparser_parser::parseSubroutineDec(){

	xml->open_node("subroutineDec");
	if(have("constructor") || have("function") || have("method")){
	}
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
	xml->close_node("subroutineDec");
}

//Parses a parameterList based on the BNF
void myparser_parser::parseParameterList(){

	xml->open_node("parameterList");
	if(token!=")"){
		parseType();
		parseVarName();
		while(have(",")){
			parseType();
			parseVarName();
		}
	}	
	xml->close_node("parameterList");
}

//Parses a subroutineBody based on the BNF
void myparser_parser::parseSubroutineBody(){

	xml->open_node("subroutineBody");
	mustbe("{");
	while(tokenvalue=="var"){
		parseVarDec();
	}
	parseStatements();
	mustbe("}");
	xml->close_node("subroutineBody");
}

//Parses a varDec based on the BNF
void myparser_parser::parseVarDec(){

	xml->open_node("varDec");
	mustbe("var");
	parseType();
	parseVarName();
	while(have(",")){
		parseVarName();
	}
	mustbe(";");
	xml->close_node("varDec");	
}

//Parses a className based on the BNF
void myparser_parser::parseClassName(){

	xml->open_node("className");
	mustbe("identifier");
	xml->close_node("className");
}

//Parses a subroutineName based on the BNF
void myparser_parser::parseSubroutineName(){

	xml->open_node("subroutineName");
	mustbe("identifier");
	xml->close_node("subroutineName");
}

//Parses a varName based on the BNF
void myparser_parser::parseVarName(){

	xml->open_node("varName");
	mustbe("identifier");
	xml->close_node("varName");
}

//Parses statements based on the BNF
void myparser_parser::parseStatements(){

	xml->open_node("statements");
	while(tokenvalue=="let" || tokenvalue=="if" || tokenvalue=="while" || tokenvalue=="do" || tokenvalue=="return"){
		parseStatement();
	}
	xml->close_node("statements");
}

//Parses a statement based on the BNF
void myparser_parser::parseStatement(){

	xml->open_node("statement");
	if(tokenvalue=="let"){
		parseLetStatement();
	}
	else if(tokenvalue=="if"){
		parseIfStatement();
	}
	else if(tokenvalue=="while"){
		parseWhileStatement();
	}
	else if(tokenvalue=="do"){
		parseDoStatement();
	}
	else{
		parseReturnStatement();
	}
	xml->close_node("statement");
}

//Parses a whileStatement based on the BNF
void myparser_parser::parseWhileStatement(){

	xml->open_node("whileStatement");
	mustbe("while");
	mustbe("(");
	parseExpression();
	mustbe(")");
	mustbe("{");
	parseStatements();
	mustbe("}");
	xml->close_node("whileStatement");
}

//Parses a ifStatement based on the BNF
void myparser_parser::parseIfStatement(){

	xml->open_node("ifStatement");
	mustbe("if");
	mustbe("(");
	parseExpression();
	mustbe(")");
	mustbe("{");
	parseStatements();
	mustbe("}");
	if(tokenvalue=="else"){
		have("else");
		mustbe("{");
		parseStatements();
		mustbe("}");
	}
	xml->close_node("ifStatement");
}

//Parses a letStatement based on the BNF
void myparser_parser::parseLetStatement(){

	xml->open_node("letStatement");
	mustbe("let");
	parseVarName();
	if(have("[")){
		parseExpression();
		mustbe("]");
	}
	mustbe("=");
	parseExpression();
	mustbe(";");
	xml->close_node("letStatement");
}

//Parses a doStatement based on the BNF
void myparser_parser::parseDoStatement(){

	xml->open_node("doStatement");
	mustbe("do");
	lookAhead();
	mustbe(";");
	xml->close_node("doStatement");
}

//Parses a returnStatement based on the BNF
void myparser_parser::parseReturnStatement(){

	xml->open_node("returnStatement");
	mustbe("return");
	if(token!=";"){
		parseExpression();
	}
	mustbe(";");
	xml->close_node("returnStatement");
}

//Parses an expression based on the BNF
void myparser_parser::parseExpression(){

	xml->open_node("expression");
	parseTerm();
	while(token=="+" || token=="-" || token=="*" || token=="/" || token=="&" || token=="|" || token=="<" || token==">" || token=="="){
		parseOp();
		parseTerm();
	}
	xml->close_node("expression");
}

//Parses a term based on the BNF
void myparser_parser::parseTerm(){

	xml->open_node("term");
	if(have("(")){
		parseExpression();
		mustbe(")");
	}
	else if(tokenclass=="keyword"){
		parseKeywordConstant();
	}
	else if(tokenvalue=="~" || tokenvalue=="-"){
		parseUnaryOp();
		parseTerm();
	}	
	else if(have("stringConstant")){
	}
	else if(have("integerConstant")){
	}
	else{
		lookAhead();
	}
	xml->close_node("term");
}

//Parses an expressionList based on the BNF
void myparser_parser::parseExpressionList(){

	xml->open_node("expressionList");
	if(token!=")"){
		parseExpression();
		while(have(",")){
			parseExpression();
		}
	}
	xml->close_node("expressionList");
}

//Parses an op based on the BNF
void myparser_parser::parseOp(){

	if(!(have("+") || have("-") || have("*") || have("/") || have("&") || have("|") || have("<") || have(">"))){
		mustbe("=");		
	}
}

//Parses a unaryOp based on the BNF
void myparser_parser::parseUnaryOp(){

	if(!have("~")){
		mustbe("-");
	}
}

//Parses a keyword based on the BNF
void myparser_parser::parseKeywordConstant(){

	if(tokenvalue=="true"){
		xml->open_node(tokenclass);
		xml->node_text(tokenvalue);
		xml->close_node(tokenclass);
		nextToken();
	}
	else if(tokenvalue=="false"){
		xml->open_node(tokenclass);
		xml->node_text(tokenvalue);
		xml->close_node(tokenclass);
		nextToken();
	}
	else if(tokenvalue=="null"){
		xml->open_node(tokenclass);
		xml->node_text(tokenvalue);
		xml->close_node(tokenclass);
		nextToken();
	}
	else{
		xml->open_node(tokenclass);
		xml->node_text(tokenvalue);
		xml->close_node(tokenclass);
		nextToken();
	}
}



