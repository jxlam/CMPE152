grammar Ghey;

@header {
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;
}

prog 		: header mainBlock '.' ; 
header		: PROG IDENTIFIER ';';
mainBlock 	: block;
block		: stmt	
			| ('return' expr NEWLINE)?
			;

var_decl      : IDENTIFIER types ;

types : '1potato'  
     | '2potato'    
     | 'Integer'   
     | 'Vector'             
     ;

stmt : compound_stmt    
     | assignment_stmt     
     | if_stmt   
     | while_loop
     | expr ';'*   
     | var_decl ';'*                        
     ;
     
compound_stmt:
	'{' (stmt ';')* '}' ;
	
assignment_stmt:
	var_decl '=' expr ';'* ;
	
if_stmt:
	IF ('('expr')') compound_stmt (ELSE compound_stmt)? ;
	
while_loop:
	WHILE expr block;

variable : IDENTIFIER ;

expr locals [ TypeSpec *type = nullptr ]
	 : expr mul_div_op expr    # mul_div_opExpr
     | expr add_sub_op expr    # add_sub_opExpr
     | expr rel_op expr        # rel_opExpr
     | number                  # numberExpr
     | variable                # variableExpr
     | '(' expr ')'            # parenExpr
     ;
     
mul_div_op : MUL_OP | DIV_OP ;
add_sub_op : ADD_OP | SUB_OP ;
rel_op     : EQ_OP | NEQ_OP | LT_OP | LE_OP | GT_OP | GE_OP ;
     
number locals [ TypeSpec *type = nullptr ] 
	 : sign? NUM
	 ;
	 
sign   : '+' | '-' ;
     
 

PROG: 'PROG';

IF      : 'IF' ;
ELSE    : 'ELSE';
WHILE	: 'WHILE';

IDENTIFIER : [a-zA-Z][a-zA-Z0-9]* ;
NUM : [0-9]+;

MUL_OP :   '*' ;
DIV_OP :   '/' ;
ADD_OP :   '+' ;
SUB_OP :   '-' ;

EQ_OP : '=' ;
NEQ_OP: '!=';
LT_OP : '<' ;
LE_OP : '<=' ;
GT_OP : '>' ;
GE_OP : '>=' ;


NEWLINE : '\r'? '\n' -> skip  ;
WS      : [ \t]+ -> skip ; 

/*
 *
 * OUTPUT
 Tokens:
[@0,0:-1='<EOF>',<-1>,1:0]

Parse tree (Lisp format):
prog
line 1:0 mismatched input '<EOF>' expecting {'(', ID, INT, NEWLINE}
 
 */