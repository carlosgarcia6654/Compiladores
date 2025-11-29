#ifndef SYMBOLS_H
#define SYMBOLS_H

#define MAX_SYMBOLS 1000
#define MAX_SCOPE_LEVEL 10

/* Tipos de datos */
#define TYPE_VOID 0
#define TYPE_INT 1
#define TYPE_FLOAT 2
#define TYPE_CHAR 3
#define TYPE_STRING 4

/* Tipos de símbolos */
#define SYM_VARIABLE 0
#define SYM_FUNCTION 1
#define SYM_PARAMETER 2

/* Estructura de un símbolo */
typedef struct Symbol {
    char *name;
    int sym_type;
    int data_type;
    int scope_level;
    int is_initialized;
    int num_params;
    struct Symbol *next;
} Symbol;

/* Tabla de símbolos */
typedef struct SymbolTable {
    Symbol *symbols[MAX_SYMBOLS];
    int scope_level;
    int count;
    struct SymbolTable *parent;
} SymbolTable;

/* Funciones de la tabla de símbolos */
SymbolTable* create_symbol_table(int scope_level);
void free_symbol_table(SymbolTable *table);
Symbol* create_symbol(char *name, int sym_type, int data_type, int scope_level);
int insert_symbol(SymbolTable *table, Symbol *sym);
Symbol* lookup_symbol(SymbolTable *table, char *name);
Symbol* lookup_symbol_all_scopes(SymbolTable *table, char *name);
void print_symbol_table(SymbolTable *table);

/* Gestión de scopes */
extern SymbolTable *global_table;
extern SymbolTable *current_scope;
void push_scope(SymbolTable *table);
SymbolTable* pop_scope(void);
SymbolTable* get_current_scope(void);
int get_current_scope_level(void);

#endif
