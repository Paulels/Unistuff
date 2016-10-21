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

}

void myparser_parser::nextToken(){

	token=tokeniser->next_token();
	tokenclass=tokeniser->token_class();
	tokenvalue=tokeniser->token_value();

	return;
}

void myparser_parser::mustbe(string expected){

	if(expected!=token){
		//exit(0);
		nextToken();
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
		exit(0);
	}

	string savedtoken=token;
	string savedtokenclass=tokenclass;
	string savedtokenvalue=tokenvalue;

	nextToken();

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

void myparser_parser::parseProgram(){

	parseClass();

	xml->flush_output();
}

void myparser_parser::parseClass(){

	xml->open_node("class");
	mustbe("class");
	parseClassName();
	mustbe("{");
	while(tokenvalue=="static" || tokenvalue=="field"){
		parseClassVarDec();
	}
	while(tokenvalue=="constuctor" || tokenvalue=="function" || tokenvalue=="method"){
		parseSubroutineDec();
	}
	mustbe("}");
	xml->close_node("class");
}

void myparser_parser::parseClassVarDec(){

	xml->open_node("classVarDec");
	parseType();
	parseVarName();
	while(have(",")){
		parseVarName();
	}
	mustbe(";");
	xml->close_node("classVarDec");
}

void myparser_parser::parseType(){

	xml->open_node("type");
	if(have("int") || have("char") || have("boolean")){
	}
	else{
		parseClassName();
	}
	xml->close_node("type");
}

void myparser_parser::parseSubroutineDec(){

	xml->open_node("subroutineDec");
	if(have("constuctor") || have("function") || have("method")){
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

void myparser_parser::parseClassName(){

	xml->open_node("className");
	mustbe("identifier");
	xml->close_node("className");
}

void myparser_parser::parseSubroutineName(){

	xml->open_node("subroutineName");
	mustbe("identifier");
	xml->close_node("subroutineName");
}

void myparser_parser::parseVarName(){

	xml->open_node("varName");
	mustbe("identifier");
	xml->close_node("varName");
}
		
void myparser_parser::parseStatements(){

	xml->open_node("statements");
	while(tokenvalue=="let" || tokenvalue=="if" || tokenvalue=="while" || tokenvalue=="do" || tokenvalue=="return"){
		parseStatement();
	}
	xml->close_node("statements");
}

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
		
void myparser_parser::parseDoStatement(){

	xml->open_node("doStatement");
	mustbe("do");
	lookAhead();
	mustbe(";");
	xml->close_node("doStatement");
}

void myparser_parser::parseReturnStatement(){

	xml->open_node("returnStatement");
	mustbe("return");
	if(token!=";"){
		parseExpression();
	}
	mustbe(";");
	xml->close_node("returnStatement");
}
void myparser_parser::parseExpression(){

	xml->open_node("expression");
	parseTerm();
	while(token=="+" || token=="-" || token=="*" || token=="/" || token=="&" || token=="|" || token=="<" || token==">" || token=="="){
		parseOp();
		parseTerm();
	}
	xml->close_node("expression");
}

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

void myparser_parser::parseOp(){

	if(!(have("+") || have("-") || have("*") || have("/") || have("&") || have("|") || have("<") || have(">"))){
		mustbe("=");		
	}
}

void myparser_parser::parseUnaryOp(){

	if(!have("~")){
		mustbe("-");
	}
}

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



