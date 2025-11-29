# Hands-on 6: Análisis Semántico 
## Nombre del alumno  
Carlos Antonio García Tomás

---

## 📘 Descripción General

Este proyecto extiende el analizador sintáctico desarrollado en el Hands-on 5 para incorporar **análisis semántico**, utilizando **Flex** para el análisis léxico y **Bison** para el análisis sintáctico y semántico.  

El objetivo principal es **validar semánticamente un subconjunto del lenguaje C** mediante la creación y administración de una **Tabla de Símbolos Global**, **Tablas de Símbolos Locales** y una **Pila de Scopes**, permitiendo detectar errores como:

- Uso de variables no declaradas  
- Redeclaraciones (variables, constantes, funciones)  
- Verificación del número de parámetros en funciones  
- Manejo de scopes simples y anidados  

---

### Objetivo
Implementar un **módulo de análisis semántico** que trabaje sobre la estructura del parser existente, agregando:

- Gestión de tabla de símbolos  
- Manejo de scopes  
- Validación de reglas semánticas básicas  

## Requisitos

Es necesario tener instalado:

- Flex
- Bison
- GCC

---

### Compilación

```bash
# Seguir el ordén
- bison -dy parser.y
- flex lexer.l
- gcc -c symbols.c
- gcc -c semantic.c
- gcc -c y.tab.c
- gcc -c lex.yy.c
- gcc -o parser.exe y.tab.o lex.yy.o symbols.o semantic.o
- ./parser.exe input.c
