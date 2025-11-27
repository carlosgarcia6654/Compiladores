# Hands-On 4: Analizador Léxico 

# Nombre del alumno
- Carlos Antonio García Tomás 

## Descripción General

Este proyecto implementa un **analizador léxico** desarrollado en **C utilizando Flex**, cuyo propósito es identificar y clasificar los elementos fundamentales (tokens) presentes en un subconjunto del lenguaje C.

El analizador procesa un archivo de entrada en C y reconoce:

- **Directivas del preprocesador:** `#include`, `#define`
- **Palabras reservadas:** `int`, `float`, `double`, `char`, `void`, `short`, `return`, etc.
- **Identificadores:** nombres de variables, funciones, macros y librerías
- **Literales numéricos:** valores enteros
- **Operadores:** `+`, `-`, `*`, `/`, `=`, `++`
- **Delimitadores:** `( ) { } ; ,`
- **Comentarios:** `//` y `/* ... */`

# ▶️ Requisitos

Es necesario tener instalado:

- **Flex**
- **GCC**

# ▶️ ¿Cómo correrlo?

De la siguiente manera:

- **flex lexer.l**
- **gcc -o lexer lex.yy.c**
- **./lexer input.c**
