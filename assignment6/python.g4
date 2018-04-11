//Idk what Im doing-Krish
grammar PY;
program   : 
          
statement :assign | add | subtract | multiply | divide | print  ;

assign    : ID '=' (NUMBER | ID) ;
print     : 'print' (NUMBER | ID) ;
add       : (NUMBER | ID) '+' (NUMBER | ID)  ;
subtract     : (NUMBER | ID) '-' (NUMBER | ID)  ;
multiply     : (NUMBER | ID) '*' (NUMBER | ID)  ;
divide     : (NUMBER | ID) '/' (NUMBER | ID)  ;

ID     : [a-z]+ ;
NUMBER : [0-9]+ ;
WS     : [ \n\t]+ -> skip;
