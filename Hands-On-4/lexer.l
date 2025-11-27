%{
#include <stdio.h>
#include <stdlib.h>

int line_number = 1;
%}

DIGIT       [0-9]
LETTER      [a-zA-Z_]
IDENTIFIER  {LETTER}({LETTER}|{DIGIT})*
NUMBER      {DIGIT}+
WHITESPACE  [ \t]+
NEWLINE     \n

%%

"#include"      { printf("LINE %d: PREPROCESSOR_DIRECTIVE #include\n", line_number); }
"#define"       { printf("LINE %d: PREPROCESSOR_DIRECTIVE #define\n", line_number); }

"int"           { printf("LINE %d: KEYWORD int\n", line_number); }
"float"         { printf("LINE %d: KEYWORD float\n", line_number); }
"double"        { printf("LINE %d: KEYWORD double\n", line_number); }
"char"          { printf("LINE %d: KEYWORD char\n", line_number); }
"void"          { printf("LINE %d: KEYWORD void\n", line_number); }
"short"         { printf("LINE %d: KEYWORD short\n", line_number); }
"long"          { printf("LINE %d: KEYWORD long\n", line_number); }
"signed"        { printf("LINE %d: KEYWORD signed\n", line_number); }
"unsigned"      { printf("LINE %d: KEYWORD unsigned\n", line_number); }

"if"            { printf("LINE %d: KEYWORD if\n", line_number); }
"else"          { printf("LINE %d: KEYWORD else\n", line_number); }
"for"           { printf("LINE %d: KEYWORD for\n", line_number); }
"while"         { printf("LINE %d: KEYWORD while\n", line_number); }
"do"            { printf("LINE %d: KEYWORD do\n", line_number); }
"switch"        { printf("LINE %d: KEYWORD switch\n", line_number); }
"case"          { printf("LINE %d: KEYWORD case\n", line_number); }
"default"       { printf("LINE %d: KEYWORD default\n", line_number); }
"break"         { printf("LINE %d: KEYWORD break\n", line_number); }
"continue"      { printf("LINE %d: KEYWORD continue\n", line_number); }
"return"        { printf("LINE %d: KEYWORD return\n", line_number); }
"goto"          { printf("LINE %d: KEYWORD goto\n", line_number); }

"auto"          { printf("LINE %d: KEYWORD auto\n", line_number); }
"static"        { printf("LINE %d: KEYWORD static\n", line_number); }
"extern"        { printf("LINE %d: KEYWORD extern\n", line_number); }
"register"      { printf("LINE %d: KEYWORD register\n", line_number); }
"const"         { printf("LINE %d: KEYWORD const\n", line_number); }
"volatile"      { printf("LINE %d: KEYWORD volatile\n", line_number); }

"sizeof"        { printf("LINE %d: KEYWORD sizeof\n", line_number); }
"typedef"       { printf("LINE %d: KEYWORD typedef\n", line_number); }
"struct"        { printf("LINE %d: KEYWORD struct\n", line_number); }
"union"         { printf("LINE %d: KEYWORD union\n", line_number); }
"enum"          { printf("LINE %d: KEYWORD enum\n", line_number); }

"+"             { printf("LINE %d: OPERATOR +\n", line_number); }
"-"             { printf("LINE %d: OPERATOR -\n", line_number); }
"*"             { printf("LINE %d: OPERATOR *\n", line_number); }
"/"             { printf("LINE %d: OPERATOR /\n", line_number); }
"%"             { printf("LINE %d: OPERATOR %%\n", line_number); }
"++"            { printf("LINE %d: OPERATOR ++\n", line_number); }
"--"            { printf("LINE %d: OPERATOR --\n", line_number); }

"="             { printf("LINE %d: OPERATOR =\n", line_number); }
"+="            { printf("LINE %d: OPERATOR +=\n", line_number); }
"-="            { printf("LINE %d: OPERATOR -=\n", line_number); }
"*="            { printf("LINE %d: OPERATOR *=\n", line_number); }
"/="            { printf("LINE %d: OPERATOR /=\n", line_number); }
"%="            { printf("LINE %d: OPERATOR %%=\n", line_number); }

"=="            { printf("LINE %d: OPERATOR ==\n", line_number); }
"!="            { printf("LINE %d: OPERATOR !=\n", line_number); }
"<"             { printf("LINE %d: OPERATOR <\n", line_number); }
">"             { printf("LINE %d: OPERATOR >\n", line_number); }
"<="            { printf("LINE %d: OPERATOR <=\n", line_number); }
">="            { printf("LINE %d: OPERATOR >=\n", line_number); }

"!"             { printf("LINE %d: OPERATOR !\n", line_number); }
"&&"            { printf("LINE %d: OPERATOR &&\n", line_number); }
"||"            { printf("LINE %d: OPERATOR ||\n", line_number); }

"&"             { printf("LINE %d: OPERATOR &\n", line_number); }
"|"             { printf("LINE %d: OPERATOR |\n", line_number); }
"^"             { printf("LINE %d: OPERATOR ^\n", line_number); }
"~"             { printf("LINE %d: OPERATOR ~\n", line_number); }
"<<"            { printf("LINE %d: OPERATOR <<\n", line_number); }
">>"            { printf("LINE %d: OPERATOR >>\n", line_number); }

"("             { printf("LINE %d: DELIMITER (\n", line_number); }
")"             { printf("LINE %d: DELIMITER )\n", line_number); }
"{"             { printf("LINE %d: DELIMITER {\n", line_number); }
"}"             { printf("LINE %d: DELIMITER }\n", line_number); }
"["             { printf("LINE %d: DELIMITER [\n", line_number); }
"]"             { printf("LINE %d: DELIMITER ]\n", line_number); }
";"             { printf("LINE %d: DELIMITER ;\n", line_number); }
","             { printf("LINE %d: DELIMITER ,\n", line_number); }
"."             { printf("LINE %d: DELIMITER .\n", line_number); }
"->"            { printf("LINE %d: DELIMITER ->\n", line_number); }
"?"             { printf("LINE %d: DELIMITER ?\n", line_number); }
":"             { printf("LINE %d: DELIMITER :\n", line_number); }

"<"[^>]*">"     { printf("LINE %d: LIBRARY %s\n", line_number, yytext); }

{IDENTIFIER}    { printf("LINE %d: IDENTIFIER %s\n", line_number, yytext); }
{NUMBER}        { printf("LINE %d: NUMBER %s\n", line_number, yytext); }

"/*"([^*]|("*"+[^*/]))*"*"+"/"  { 
    char *ptr = yytext;
    while(*ptr) {
        if(*ptr == '\n') line_number++;
        ptr++;
    }
    printf("LINE %d: MULTILINE_COMMENT\n", line_number); 
}

"//".*          { printf("LINE %d: SINGLELINE_COMMENT\n", line_number); }

{WHITESPACE}    /* Ignorar espacios en blanco */
{NEWLINE}       { line_number++; }

.               { printf("LINE %d: UNKNOWN_CHARACTER '%s'\n", line_number, yytext); }

%%

int main(int argc, char *argv[]) {
    if (argc > 1) {
        FILE *file = fopen(argv[1], "r");
        if (!file) {
            perror("Error al abrir el archivo");
            return 1;
        }
        yyin = file;
    } else {
        yyin = stdin;
    }
    
    printf("=== ANALIZADOR LÉXICO ===\n");
    printf("Iniciando análisis...\n\n");
    
    yylex();
    
    printf("\nAnálisis completado.\n");
    printf("Total de líneas procesadas: %d\n", line_number);
    
    if (argc > 1) {
        fclose(yyin);
    }
    
    return 0;
}

int yywrap() {
    return 1;
}
