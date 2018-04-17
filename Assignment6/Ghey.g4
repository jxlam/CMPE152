grammar Ghey;

prog : stmt+ ; 

var_decl      : IDENTIFIER type ;

type : '1potato'  
     | '2potato' 
     | '3potato'    
     | 'Integer'   
     | 'Vector'             
     ;

stmt : compound_stmt    
     | assignment_stmt     
     | if_stmt   
     | expr ';'*   
     | var_decl ';'*                        
     ;
     
compound_stmt:
	'[' (stmt ';')* ']' ;
	
assignment_stmt:
	IDENTIFIER '=' expr ';'* ;
	
if_stmt:
	IF ('('expr')') compound_stmt (ELSE compound_stmt)? ;

expr : expr mul_div_op expr    
     | expr add_sub_op expr     
     | expr rel_op expr         
     | number                   
     | IDENTIFIER               
     | '(' expr ')'             
     ;
     
variable : IDENTIFIER ;
number : sign? NUM ;
sign   : '+' | '-' ;
     
mul_div_op : MUL_OP | DIV_OP ;
add_sub_op : ADD_OP | SUB_OP ;
rel_op     : EQ_OP | NEQ_OP | LT_OP | LE_OP | GT_OP | GE_OP ;


IF      : 'IF' ;
ELSE    : 'ELSE';



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

IDENTIFIER : [a-zA-Z][a-zA-Z0-9]* ;
NUM : [0-9]+;
NEWLINE : '\r'? '\n' -> skip  ;
WS      : [ \t]+ -> skip ; 

