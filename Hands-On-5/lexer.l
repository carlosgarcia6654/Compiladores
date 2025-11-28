%{
#include "y.tab.h"
#include <stdlib.h>
#include <string.h>

// DEFINIR las variables globales aquí
int line_num = 1;
int column_num = 1;

void update_column();
%}

%%

"#include"   { update_column(); return INCLUDE; }
"#define"    { update_column(); return DEFINE; }
"int"        { update_column(); return INT; }
"float"      { update_column(); return FLOAT; }
"char"       { update_column(); return CHAR; }
"void"       { update_column(); return VOID; }
"return"     { update_column(); return RETURN; }
"if"         { update_column(); return IF; }
"else"       { update_column(); return ELSE; }
"while"      { update_column(); return WHILE; }
"for"        { update_column(); return FOR; }
"{"          { update_column(); return LBRACE; }
"}"          { update_column(); return RBRACE; }
"("          { update_column(); return LPAREN; }
")"          { update_column(); return RPAREN; }
"["          { update_column(); return LBRACKET; }
"]"          { update_column(); return RBRACKET; }
"="          { update_column(); return ASSIGN; }
"=="         { update_column(); return EQ; }
"!="         { update_column(); return NEQ; }
"<"          { update_column(); return LT; }
">"          { update_column(); return GT; }
"<="         { update_column(); return LEQ; }
">="         { update_column(); return GEQ; }
"+"          { update_column(); return PLUS; }
"-"          { update_column(); return MINUS; }
"*"          { update_column(); return MULTIPLY; }
"/"          { update_column(); return DIVIDE; }
"%"          { update_column(); return MOD; }
";"          { update_column(); return SEMICOLON; }
","          { update_column(); return COMMA; }

[a-zA-Z_][a-zA-Z0-9_]* {
    yylval.string = strdup(yytext);
    update_column();
    return IDENTIFIER;
}

[0-9]+ {
    yylval.number = atoi(yytext);
    update_column();
    return NUMBER;
}

[0-9]*\.[0-9]+([eE][-+]?[0-9]+)? {
    yylval.string = strdup(yytext);
    update_column();
    return REAL;
}

\"([^"\\]|\\.)*\" {
    yylval.string = strdup(yytext);
    update_column();
    return STRING;
}

'([^'\\]|\\.)' {
    yylval.string = strdup(yytext);
    update_column();
    return CHAR_LITERAL;
}

[ \t]+        { update_column(); }
\n           { line_num++; column_num = 1; }
"//".*       ; 
"/*"([^*]|"*"[^/])*"*/" ;

.            { 
                fprintf(stderr, "Línea %d, Columna %d: Carácter no reconocido '%c'\n", 
                        line_num, column_num, yytext[0]);
                update_column();
             }

%%

void update_column() {
    column_num += yyleng;
}

int yywrap() {
    return 1;
}
