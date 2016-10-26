#include <iostream>
#include <stdlib.h>
#include "mypretty_pretty.h"
#include "jackxml.h"
#include "jacktokens.h"

using namespace std ;

//constructor
mypretty_pretty::mypretty_pretty(){

	tokeniser=jacktokens::newtokeniser();
	nextToken();
 
	xml=new jackxml();

}

//deconstructor
mypretty_pretty::~mypretty_pretty(){

	delete xml;
}

//To allow us to advance tokens
void mypretty_pretty::nextToken(){

	token=tokeniser->next_token();
	tokenclass=tokeniser->token_class();
	tokenvalue=tokeniser->token_value();

	return;
}

//checks for something if it has to be there, if it isnt there the prrogam exits and prints nothing
void mypretty_pretty::mustbe(string expected){

	if(expected!=token){
		exit(0);
	}
	else{

		cout<<
		
		nextToken();
	}
}

//checks to see if something is there cause it may or may not be 
bool mypretty_pretty::have(string expected){

	if(expected!=token){
		return false;
	}
	else{


		cout<<
	
		nextToken();
		return true;
	}
}

//
void mypretty_pretty::indentation(){

	

}

//
void mypretty_pretty::finishLine(){

	

}

//This is made for do statements and prettyterm because you need to look ahead
void mypretty_pretty::lookAhead(){

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
		cout<<savedtokenvalue
		have(".");
		printSubroutineName();
		mustbe("(");
		printExpressionList();
		mustbe(")");
	}
	else if(token=="["){
		cout<<
		mustbe("[");
		printExpression();
		mustbe("]");
	}
	else if(token=="("){
		cout<<
		mustbe("(");
		printExpressionList();
		mustbe(")");
	}
	else{
		cout<<
	}
}

//base class and what can be called to start the parsing process
void mypretty_pretty::printProgram(){

	printClass();
}

//prints a class based on the BNF
void mypretty_pretty::printClass(){

	mustbe("class");
	printClassName();
	mustbe("{");
	while(tokenvalue=="static" || tokenvalue=="field"){
		printClassVarDec();
	}
	while(tokenvalue=="constructor" || tokenvalue=="function" || tokenvalue=="method"){
		printSubroutineDec();
	}
	mustbe("}");
}

////prints a classVarDec based on the BNF
void mypretty_pretty::printClassVarDec(){

	if(have("static") || have("field")){ /////????????????????
	}
	printType();
	printVarName();
	while(have(",")){
		printVarName();
	}
	mustbe(";");
}

//prints a type based on the BNF
void mypretty_pretty::printType(){

	if(have("int") || have("char") || have("boolean")){
	}
	else{
		printClassName();
	}
}

//prints a subroutineDec based on the BNF
void mypretty_pretty::printSubroutineDec(){

	if(have("constructor") || have("function") || have("method")){
	}
	if(have("void")){
	}
	else{
		printType();
	}
	printSubroutineName();
	mustbe("(");
	printParameterList();
	mustbe(")");
	printSubroutineBody();
}

//prints a parameterList based on the BNF
void mypretty_pretty::printParameterList(){

	if(token!=")"){
		printType();
		printVarName();
		while(have(",")){
			printType();
			printVarName();
		}
	}
}

//prints a subroutineBody based on the BNF
void mypretty_pretty::printSubroutineBody(){

	mustbe("{");
	while(tokenvalue=="var"){
		printVarDec();
	}
	printStatements();
	mustbe("}");
}

//prints a varDec based on the BNF
void mypretty_pretty::printVarDec(){ /////?????????????????

	mustbe("var");
	printType();
	printVarName();
	while(have(",")){
		printVarName();
	}
	mustbe(";");
}

//prints a className based on the BNF
void mypretty_pretty::printClassName(){

	mustbe("identifier");////??????????????????
}

//prints a subroutineName based on the BNF
void mypretty_pretty::printSubroutineName(){

	mustbe("identifier");/////????????????????
}

//prints a varName based on the BNF
void mypretty_pretty::printVarName(){

	mustbe("identifier");///???????????????????????
}

//prints statements based on the BNF
void mypretty_pretty::printStatements(){

	while(tokenvalue=="let" || tokenvalue=="if" || tokenvalue=="while" || tokenvalue=="do" || tokenvalue=="return"){
		printStatement();
	}
}

//prints a statement based on the BNF
void mypretty_pretty::printStatement(){

	if(tokenvalue=="let"){
		printLetStatement();
	}
	else if(tokenvalue=="if"){
		printIfStatement();
	}
	else if(tokenvalue=="while"){
		printWhileStatement();
	}
	else if(tokenvalue=="do"){
		printDoStatement();
	}
	else{
		printReturnStatement();
	}
}

//prints a whileStatement based on the BNF
void mypretty_pretty::printWhileStatement(){

	mustbe("while");
	mustbe("(");
	printExpression();
	mustbe(")");
	mustbe("{");
	printStatements();
	mustbe("}");
}

//prints a ifStatement based on the BNF
void mypretty_pretty::printIfStatement(){

	mustbe("if");
	mustbe("(");
	printExpression();
	mustbe(")");
	mustbe("{");
	printStatements();
	mustbe("}");
	if(tokenvalue=="else"){
		have("else");
		mustbe("{");
		printStatements();
		mustbe("}");
	}
}

//prints a letStatement based on the BNF
void mypretty_pretty::printLetStatement(){

	mustbe("let");
	printVarName();
	if(have("[")){
		printExpression();
		mustbe("]");
	}
	mustbe("=");
	printExpression();
	mustbe(";");
	xml->close_node("letStatement");
}

//prints a doStatement based on the BNF
void mypretty_pretty::printDoStatement(){

	xml->open_node("doStatement");
	mustbe("do");
	lookAhead();
	mustbe(";");
}

//prints a returnStatement based on the BNF
void mypretty_pretty::printReturnStatement(){

	mustbe("return");
	if(token!=";"){
		printExpression();
	}
	mustbe(";");
}

//prints an expression based on the BNF
void mypretty_pretty::printExpression(){

	printTerm();
	while(token=="+" || token=="-" || token=="*" || token=="/" || token=="&" || token=="|" || token=="<" || token==">" || token=="="){
		printOp();
		printTerm();
	}
}

//prints a term based on the BNF
void mypretty_pretty::printTerm(){

	if(have("(")){
		printExpression();
		mustbe(")");
	}
	else if(tokenclass=="keyword"){
		printKeywordConstant();
	}
	else if(tokenvalue=="~" || tokenvalue=="-"){
		printUnaryOp();
		printTerm();
	}	
	else if(have("stringConstant")){
	}
	else if(have("integerConstant")){
	}
	else{
		lookAhead();
	}
}

//prints an expressionList based on the BNF
void mypretty_pretty::printExpressionList(){

	if(token!=")"){
		printExpression();
		while(have(",")){
			printExpression();
		}
	}
}

//prints an op based on the BNF
void mypretty_pretty::printOp(){

	if(!(have("+") || have("-") || have("*") || have("/") || have("&") || have("|") || have("<") || have(">"))){
		mustbe("=");		
	}
}

//prints a unaryOp based on the BNF
void mypretty_pretty::printUnaryOp(){

	if(!have("~")){
		mustbe("-");
	}
}

//prints a keyword based on the BNF
void mypretty_pretty::printKeywordConstant(){

	if(tokenvalue=="true"){
		cout<<tokenvalue
		nextToken();
	}
	else if(tokenvalue=="false"){
		cout<<
		nextToken();
	}
	else if(tokenvalue=="null"){
		cout<<
		nextToken();
	}
	else{
		cout<<
		nextToken();
	}
}



