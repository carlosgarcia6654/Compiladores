# Hands-on 5: Crear Analizador Sintáctico

## Nombre del alumno  
Carlos Antonio García Tomás

---

## Descripción General

Este proyecto implementa un analizador sintáctico desarrollado en C utilizando Flex y Bison, cuyo propósito es validar la estructura sintáctica de un subconjunto del lenguaje C basándose en reglas gramaticales definidas.

El analizador procesa un archivo de entrada en C y reconoce:

- Declaraciones globales y locales
- Declaración de funciones
- Bloques { ... }
- Asignaciones
- Llamadas a funciones
- Expresiones aritméticas
- Instrucciones y funciones

---

## Características del Analizador

- Validación sintáctica basada en gramáticas libres de contexto (CFG)
- Mensajes de error informativos con línea, columna y token problemático
- Tabla de símbolos básica para seguimiento de variables y funciones
- Reconocimiento de estructuras complejas del lenguaje C

---

## Requisitos

Es necesario tener instalado:

- Flex
- Bison
- GCC

---

## Instalación y Ejecución

### Compilación

```bash
# Generar el analizador léxico con Flex
- flex lexer.l

# Generar el analizador sintáctico con Bison
- bison -dy parser.y

# Compilar ambos componentes
- gcc -o parser lex.yy.c y.tab.c

# Ejecutar el analizador
- ./parser input.c
