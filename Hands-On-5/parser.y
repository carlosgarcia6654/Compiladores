%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// DECLARAR yyerror ANTES de cualquier inclusión que pueda necesitarlo
void yyerror(const char *s);

extern FILE *yyin;
extern int yyparse();
extern int yylex(void);

// DECLARAR como extern las variables definidas en lexer.l
extern int line_num;
extern int column_num;
extern char* yytext;

// Variables para seguimiento de contexto
int current_scope = 0;
int error_count = 0;

// Función para reportar errores detallados
void report_error(const char* msg, const char* token) {
    fprintf(stderr, "Línea %d, Columna %d: ERROR - %s", line_num, column_num, msg);
    if (token != NULL) {
        fprintf(stderr, " (Token: '%s')", token);
    }
    fprintf(stderr, "\n");
    error_count++;
}

// Función para reportar advertencias
void report_warning(const char* msg, const char* token) {
    fprintf(stderr, "Línea %d, Columna %d: ADVERTENCIA - %s", line_num, column_num, msg);
    if (token != NULL) {
        fprintf(stderr, " (Token: '%s')", token);
    }
    fprintf(stderr, "\n");
}

// Función para mensajes informativos
void log_analysis(const char* msg) {
    printf("Línea %d: %s\n", line_num, msg);
}
%}

%union {
    int number;
    char *string;
}

/* TOKENS */
%token INCLUDE DEFINE
%token INT FLOAT CHAR VOID RETURN
%token IF ELSE WHILE FOR
%token LBRACE RBRACE LPAREN RPAREN LBRACKET RBRACKET
%token ASSIGN EQ NEQ LT GT LEQ GEQ
%token PLUS MINUS MULTIPLY DIVIDE MOD
%token SEMICOLON COMMA

%token <number> NUMBER
%token <string> IDENTIFIER STRING REAL CHAR_LITERAL

%type <string> type identifier

%start program

%%

program: 
    preprocessor_directives declaration_list 
    {
        if (error_count == 0) {
            printf("\n=== ANÁLISIS COMPLETADO EXITOSAMENTE ===\n");
            printf("Total de errores: %d\n", error_count);
        } else {
            printf("\n=== ANÁLISIS COMPLETADO CON %d ERRORES ===\n", error_count);
        }
    }
    | error 
    {
        report_error("Error fatal en el programa", NULL);
        YYABORT;
    }
;

preprocessor_directives:
    /* vacío */
    | preprocessor_directives preprocessor_directive
;

preprocessor_directive:
    INCLUDE STRING SEMICOLON 
    {
        log_analysis("Directiva #include procesada");
    }
    | DEFINE IDENTIFIER NUMBER SEMICOLON 
    {
        log_analysis("Directiva #define procesada");
    }
    | INCLUDE LT IDENTIFIER GT SEMICOLON 
    {
        log_analysis("Directiva #include con <> procesada");
    }
    | error SEMICOLON
    {
        report_error("Error en directiva de preprocesador", yytext);
        yyerrok;
    }
;

declaration_list: 
    /* vacío */
    | declaration_list declaration
;

declaration: 
    global_declaration SEMICOLON
    {
        log_analysis("Declaración global completada");
    }
    | function_declaration 
    {
        log_analysis("Declaración de función completada");
    }
    | error SEMICOLON
    {
        report_error("Error en declaración", yytext);
        yyerrok;
    }
;

global_declaration: 
    type identifier 
    {
        log_analysis("Variable global declarada");
    }
    | type identifier ASSIGN expression 
    {
        log_analysis("Variable global declarada e inicializada");
    }
;

type: 
    INT { $$ = "int"; }
    | FLOAT { $$ = "float"; }
    | CHAR { $$ = "char"; }
    | VOID { $$ = "void"; }
;

function_declaration: 
    type identifier LPAREN parameter_list RPAREN block 
    {
        log_analysis("Definición de función con parámetros completada");
    }
    | type identifier LPAREN RPAREN block 
    {
        log_analysis("Definición de función sin parámetros completada");
    }
    | type identifier LPAREN error RPAREN
    {
        report_error("Error en lista de parámetros de función", yytext);
    }
;

parameter_list: 
    parameter
    | parameter_list COMMA parameter
    | parameter_list error
    {
        report_error("Error en lista de parámetros", yytext);
    }
;

parameter: 
    type identifier 
    {
        log_analysis("Parámetro de función declarado");
    }
;

block: 
    LBRACE statement_list RBRACE 
    {
        log_analysis("Bloque de código completado");
    }
    | LBRACE RBRACE 
    {
        log_analysis("Bloque vacío completado");
    }
    | LBRACE error RBRACE
    {
        report_error("Error en bloque de código", yytext);
    }
;

statement_list: 
    /* vacío */
    | statement_list statement
;

statement: 
    block
    | expression SEMICOLON 
    {
        log_analysis("Expresión procesada");
    }
    | assignment SEMICOLON 
    {
        log_analysis("Asignación completada");
    }
    | function_call SEMICOLON 
    {
        log_analysis("Llamada a función procesada");
    }
    | RETURN expression SEMICOLON 
    {
        log_analysis("Sentencia return con valor");
    }
    | RETURN SEMICOLON 
    {
        log_analysis("Sentencia return sin valor");
    }
    | type identifier SEMICOLON 
    {
        log_analysis("Variable local declarada");
    }
    | type identifier ASSIGN expression SEMICOLON 
    {
        log_analysis("Variable local declarada e inicializada");
    }
    | IF LPAREN expression RPAREN statement 
    {
        log_analysis("Sentencia if procesada");
    }
    | IF LPAREN expression RPAREN statement ELSE statement 
    {
        log_analysis("Sentencia if-else procesada");
    }
    | WHILE LPAREN expression RPAREN statement 
    {
        log_analysis("Sentencia while procesada");
    }
    | FOR LPAREN for_init SEMICOLON for_cond SEMICOLON for_iter RPAREN statement 
    {
        log_analysis("Sentencia for procesada");
    }
    | error SEMICOLON
    {
        report_error("Error en sentencia", yytext);
        yyerrok;
    }
;

for_init:
    /* vacío */
    | expression
    | type identifier ASSIGN expression
;

for_cond:
    /* vacío */
    | expression
;

for_iter:
    /* vacío */
    | expression
;

assignment: 
    identifier ASSIGN expression 
    {
        log_analysis("Asignación a variable procesada");
    }
;

function_call: 
    identifier LPAREN RPAREN 
    {
        log_analysis("Llamada a función sin argumentos");
    }
    | identifier LPAREN argument_list RPAREN 
    {
        log_analysis("Llamada a función con argumentos");
    }
    | identifier LPAREN error RPAREN
    {
        report_error("Error en argumentos de función", yytext);
    }
;

argument_list: 
    expression
    | argument_list COMMA expression
    | argument_list error
    {
        report_error("Error en lista de argumentos", yytext);
    }
;

expression: 
    logical_expression
;

logical_expression:
    relational_expression
    | logical_expression EQ relational_expression 
    {
        log_analysis("Operación de igualdad");
    }
    | logical_expression NEQ relational_expression 
    {
        log_analysis("Operación de desigualdad");
    }
;

relational_expression:
    additive_expression
    | relational_expression LT additive_expression 
    {
        log_analysis("Operación menor que");
    }
    | relational_expression GT additive_expression 
    {
        log_analysis("Operación mayor que");
    }
    | relational_expression LEQ additive_expression 
    {
        log_analysis("Operación menor o igual que");
    }
    | relational_expression GEQ additive_expression 
    {
        log_analysis("Operación mayor o igual que");
    }
;

additive_expression: 
    multiplicative_expression
    | additive_expression PLUS multiplicative_expression 
    {
        log_analysis("Operación aritmética: suma");
    }
    | additive_expression MINUS multiplicative_expression 
    {
        log_analysis("Operación aritmética: resta");
    }
;

multiplicative_expression: 
    primary_expression
    | multiplicative_expression MULTIPLY primary_expression 
    {
        log_analysis("Operación aritmética: multiplicación");
    }
    | multiplicative_expression DIVIDE primary_expression 
    {
        log_analysis("Operación aritmética: división");
    }
    | multiplicative_expression MOD primary_expression 
    {
        log_analysis("Operación aritmética: módulo");
    }
;

primary_expression: 
    identifier 
    {
        log_analysis("Identificador referenciado");
    }
    | NUMBER 
    {
        log_analysis("Constante entera");
    }
    | REAL 
    {
        log_analysis("Constante real");
    }
    | CHAR_LITERAL 
    {
        log_analysis("Constante carácter");
    }
    | STRING
    {
        log_analysis("Literal de cadena");
    }
    | LPAREN expression RPAREN
    | function_call
    | error
    {
        report_error("Error en expresión primaria", yytext);
    }
;

identifier: 
    IDENTIFIER { $$ = $1; }
;

%%

// Ahora la DEFINICIÓN de yyerror (ya fue declarada al inicio)
void yyerror(const char *s) {
    fprintf(stderr, "Línea %d, Columna %d: Error sintáctico - %s\n", line_num, column_num, s);
    fprintf(stderr, "Token actual: '%s'\n", yytext);
    error_count++;
}

int main(int argc, char *argv[]) {
    error_count = 0;
    
    if (argc < 2) {
        fprintf(stderr, "Uso: %s <archivo.c>\n", argv[0]);
        return 1;
    }
    
    yyin = fopen(argv[1], "r");
    if (!yyin) {
        perror("Error al abrir archivo");
        return 1;
    }
    
    printf("=== INICIANDO ANÁLISIS SINTÁCTICO ===\n");
    printf("Archivo: %s\n\n", argv[1]);
    
    int result = yyparse();
    
    fclose(yyin);
    
    if (result == 0 && error_count == 0) {
        printf("✅ Análisis completado sin errores\n");
    } else {
        printf("❌ Análisis completado con %d error(es)\n", error_count);
    }
    
    return result;
}
