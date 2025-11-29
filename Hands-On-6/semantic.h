#ifndef SEMANTIC_H
#define SEMANTIC_H

#include "symbols.h"

// Declarar como extern
extern int semantic_errors;
extern int yylineno;

const char* get_type_name(int type);
int are_types_compatible(int type1, int type2);
void type_check_assignment(int left_type, int right_type, int line);
void type_check_binary_operation(int left_type, int right_type, char* op, int line);
void type_check_unary_operation(int operand_type, char* op, int line);
int check_function_call(Symbol *func_sym, int arg_count, int line);
void check_return_type(int return_type, Symbol *current_function, int line);
void check_variable_usage(Symbol *sym, int line);
void semantic_error(const char *message);

#endif
