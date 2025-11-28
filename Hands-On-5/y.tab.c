/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

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

#line 117 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INCLUDE = 258,                 /* INCLUDE  */
    DEFINE = 259,                  /* DEFINE  */
    INT = 260,                     /* INT  */
    FLOAT = 261,                   /* FLOAT  */
    CHAR = 262,                    /* CHAR  */
    VOID = 263,                    /* VOID  */
    RETURN = 264,                  /* RETURN  */
    IF = 265,                      /* IF  */
    ELSE = 266,                    /* ELSE  */
    WHILE = 267,                   /* WHILE  */
    FOR = 268,                     /* FOR  */
    LBRACE = 269,                  /* LBRACE  */
    RBRACE = 270,                  /* RBRACE  */
    LPAREN = 271,                  /* LPAREN  */
    RPAREN = 272,                  /* RPAREN  */
    LBRACKET = 273,                /* LBRACKET  */
    RBRACKET = 274,                /* RBRACKET  */
    ASSIGN = 275,                  /* ASSIGN  */
    EQ = 276,                      /* EQ  */
    NEQ = 277,                     /* NEQ  */
    LT = 278,                      /* LT  */
    GT = 279,                      /* GT  */
    LEQ = 280,                     /* LEQ  */
    GEQ = 281,                     /* GEQ  */
    PLUS = 282,                    /* PLUS  */
    MINUS = 283,                   /* MINUS  */
    MULTIPLY = 284,                /* MULTIPLY  */
    DIVIDE = 285,                  /* DIVIDE  */
    MOD = 286,                     /* MOD  */
    SEMICOLON = 287,               /* SEMICOLON  */
    COMMA = 288,                   /* COMMA  */
    NUMBER = 289,                  /* NUMBER  */
    IDENTIFIER = 290,              /* IDENTIFIER  */
    STRING = 291,                  /* STRING  */
    REAL = 292,                    /* REAL  */
    CHAR_LITERAL = 293             /* CHAR_LITERAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INCLUDE 258
#define DEFINE 259
#define INT 260
#define FLOAT 261
#define CHAR 262
#define VOID 263
#define RETURN 264
#define IF 265
#define ELSE 266
#define WHILE 267
#define FOR 268
#define LBRACE 269
#define RBRACE 270
#define LPAREN 271
#define RPAREN 272
#define LBRACKET 273
#define RBRACKET 274
#define ASSIGN 275
#define EQ 276
#define NEQ 277
#define LT 278
#define GT 279
#define LEQ 280
#define GEQ 281
#define PLUS 282
#define MINUS 283
#define MULTIPLY 284
#define DIVIDE 285
#define MOD 286
#define SEMICOLON 287
#define COMMA 288
#define NUMBER 289
#define IDENTIFIER 290
#define STRING 291
#define REAL 292
#define CHAR_LITERAL 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 47 "parser.y"

    int number;
    char *string;

#line 251 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INCLUDE = 3,                    /* INCLUDE  */
  YYSYMBOL_DEFINE = 4,                     /* DEFINE  */
  YYSYMBOL_INT = 5,                        /* INT  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_CHAR = 7,                       /* CHAR  */
  YYSYMBOL_VOID = 8,                       /* VOID  */
  YYSYMBOL_RETURN = 9,                     /* RETURN  */
  YYSYMBOL_IF = 10,                        /* IF  */
  YYSYMBOL_ELSE = 11,                      /* ELSE  */
  YYSYMBOL_WHILE = 12,                     /* WHILE  */
  YYSYMBOL_FOR = 13,                       /* FOR  */
  YYSYMBOL_LBRACE = 14,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 15,                    /* RBRACE  */
  YYSYMBOL_LPAREN = 16,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 17,                    /* RPAREN  */
  YYSYMBOL_LBRACKET = 18,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 19,                  /* RBRACKET  */
  YYSYMBOL_ASSIGN = 20,                    /* ASSIGN  */
  YYSYMBOL_EQ = 21,                        /* EQ  */
  YYSYMBOL_NEQ = 22,                       /* NEQ  */
  YYSYMBOL_LT = 23,                        /* LT  */
  YYSYMBOL_GT = 24,                        /* GT  */
  YYSYMBOL_LEQ = 25,                       /* LEQ  */
  YYSYMBOL_GEQ = 26,                       /* GEQ  */
  YYSYMBOL_PLUS = 27,                      /* PLUS  */
  YYSYMBOL_MINUS = 28,                     /* MINUS  */
  YYSYMBOL_MULTIPLY = 29,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 30,                    /* DIVIDE  */
  YYSYMBOL_MOD = 31,                       /* MOD  */
  YYSYMBOL_SEMICOLON = 32,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 33,                     /* COMMA  */
  YYSYMBOL_NUMBER = 34,                    /* NUMBER  */
  YYSYMBOL_IDENTIFIER = 35,                /* IDENTIFIER  */
  YYSYMBOL_STRING = 36,                    /* STRING  */
  YYSYMBOL_REAL = 37,                      /* REAL  */
  YYSYMBOL_CHAR_LITERAL = 38,              /* CHAR_LITERAL  */
  YYSYMBOL_YYACCEPT = 39,                  /* $accept  */
  YYSYMBOL_program = 40,                   /* program  */
  YYSYMBOL_preprocessor_directives = 41,   /* preprocessor_directives  */
  YYSYMBOL_preprocessor_directive = 42,    /* preprocessor_directive  */
  YYSYMBOL_declaration_list = 43,          /* declaration_list  */
  YYSYMBOL_declaration = 44,               /* declaration  */
  YYSYMBOL_global_declaration = 45,        /* global_declaration  */
  YYSYMBOL_type = 46,                      /* type  */
  YYSYMBOL_function_declaration = 47,      /* function_declaration  */
  YYSYMBOL_parameter_list = 48,            /* parameter_list  */
  YYSYMBOL_parameter = 49,                 /* parameter  */
  YYSYMBOL_block = 50,                     /* block  */
  YYSYMBOL_statement_list = 51,            /* statement_list  */
  YYSYMBOL_statement = 52,                 /* statement  */
  YYSYMBOL_for_init = 53,                  /* for_init  */
  YYSYMBOL_for_cond = 54,                  /* for_cond  */
  YYSYMBOL_for_iter = 55,                  /* for_iter  */
  YYSYMBOL_assignment = 56,                /* assignment  */
  YYSYMBOL_function_call = 57,             /* function_call  */
  YYSYMBOL_argument_list = 58,             /* argument_list  */
  YYSYMBOL_expression = 59,                /* expression  */
  YYSYMBOL_logical_expression = 60,        /* logical_expression  */
  YYSYMBOL_relational_expression = 61,     /* relational_expression  */
  YYSYMBOL_additive_expression = 62,       /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 63, /* multiplicative_expression  */
  YYSYMBOL_primary_expression = 64,        /* primary_expression  */
  YYSYMBOL_identifier = 65                 /* identifier  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   240

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  153

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   293


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    71,    71,    80,    87,    89,    93,    97,   101,   105,
     112,   114,   118,   122,   126,   134,   138,   145,   146,   147,
     148,   152,   156,   160,   167,   168,   169,   176,   183,   187,
     191,   197,   199,   203,   204,   208,   212,   216,   220,   224,
     228,   232,   236,   240,   244,   248,   255,   257,   258,   261,
     263,   266,   268,   272,   279,   283,   287,   294,   295,   296,
     303,   307,   308,   312,   319,   320,   324,   328,   332,   339,
     340,   344,   351,   352,   356,   360,   367,   371,   375,   379,
     383,   387,   388,   389,   396
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INCLUDE", "DEFINE",
  "INT", "FLOAT", "CHAR", "VOID", "RETURN", "IF", "ELSE", "WHILE", "FOR",
  "LBRACE", "RBRACE", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", "ASSIGN",
  "EQ", "NEQ", "LT", "GT", "LEQ", "GEQ", "PLUS", "MINUS", "MULTIPLY",
  "DIVIDE", "MOD", "SEMICOLON", "COMMA", "NUMBER", "IDENTIFIER", "STRING",
  "REAL", "CHAR_LITERAL", "$accept", "program", "preprocessor_directives",
  "preprocessor_directive", "declaration_list", "declaration",
  "global_declaration", "type", "function_declaration", "parameter_list",
  "parameter", "block", "statement_list", "statement", "for_init",
  "for_cond", "for_iter", "assignment", "function_call", "argument_list",
  "expression", "logical_expression", "relational_expression",
  "additive_expression", "multiplicative_expression", "primary_expression",
  "identifier", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-74)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-52)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     206,   -74,     5,   222,   -74,     0,   -19,     7,   -74,   231,
     -74,    25,    32,    39,    34,   -74,   -74,   -74,   -74,   -74,
      47,    36,   -74,    59,   -74,    65,   -74,   -74,   -74,    -9,
      74,   -74,   111,   182,   -74,    91,    96,    36,    30,   -74,
     -74,   182,   -74,   -74,   -74,   -74,   -74,   -74,    18,    11,
      41,    27,   -74,   107,   -74,    14,   -74,   -74,   -74,    96,
      38,   108,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,    58,   114,   -74,   126,   -74,   -74,   -74,
      11,    11,    41,    41,    41,    41,    27,    27,   -74,   -74,
     -74,   109,   -74,    37,   -74,   -74,   105,    66,   128,   129,
     130,   -74,    36,   -74,   -74,   125,   133,   135,    -8,   -74,
     -74,   -74,   182,   -74,   -74,   137,   182,   182,   165,   -14,
     -74,   -74,   -74,   182,   -74,   -74,   168,   174,    36,   150,
     -74,   182,   -74,   -74,   142,   142,   188,   152,   192,   223,
     -74,   182,   201,   -74,   -74,   142,   -74,   158,   -74,   218,
     -74,   142,   -74
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     3,     0,     0,     1,     0,     0,     0,     5,     0,
       9,     0,     0,     0,     0,    17,    18,    19,    20,    11,
       0,     0,    13,     0,     6,     0,    14,    12,    84,    15,
       0,     7,     0,     0,     8,     0,     0,     0,     0,    24,
      83,     0,    77,    80,    78,    79,    82,    16,    60,    61,
      64,    69,    72,    76,    23,     0,    22,    27,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,     0,    21,    25,    81,
      62,    63,    65,    66,    67,    68,    70,    71,    73,    74,
      75,    83,    54,     0,    57,    30,    83,     0,     0,     0,
       0,    28,     0,    33,    32,     0,    82,     0,    76,    56,
      59,    55,     0,    45,    38,     0,     0,     0,     0,     0,
      35,    36,    34,     0,    58,    37,     0,     0,     0,     0,
      47,     0,    39,    53,     0,     0,     0,     0,     0,    41,
      43,     0,     0,    50,    40,     0,    48,     0,    42,     0,
      52,     0,    44
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -74,   -74,   -74,   -74,   -74,   -74,   -74,    -7,   -74,   -74,
     180,   -26,   -74,    70,   -74,   -74,   -74,   -74,   -73,   -74,
     -32,   -74,   -49,    23,     8,    50,   -21
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     8,     9,    19,    20,   102,    22,    38,
      39,   103,    76,   104,   129,   142,   149,   105,    46,    93,
     107,    48,    49,    50,    51,    52,    53
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      29,    47,    21,   106,    11,     4,   131,    32,    73,    61,
      56,    33,   123,    80,    81,    74,    57,    12,   132,   -31,
     -31,   -31,   -31,   -31,   -31,    37,   -31,   -31,   -31,    75,
     -31,    58,    10,    77,    64,    65,    66,    67,   110,    62,
      63,    94,    13,    15,    16,    17,    18,    59,   -31,   -31,
     -31,   -31,   -31,    37,   111,   108,    70,    71,    72,    91,
      23,   106,   106,    60,    24,   115,    26,    40,    68,    69,
     112,    28,   106,    25,    41,    92,    86,    87,   106,    27,
     124,   119,    41,    30,   126,   127,   130,    82,    83,    84,
      85,   133,    42,    28,    43,    44,    45,    31,   114,   138,
      42,    28,    43,    44,    45,   143,    34,   136,    54,   146,
      55,   128,    35,   108,   108,   150,    15,    16,    17,    18,
      88,    89,    90,    73,   108,    79,   109,    96,    36,    95,
     108,    15,    16,    17,    18,    97,    98,   113,    99,   100,
      55,   101,    41,    96,   116,   117,   118,    15,    16,    17,
      18,    97,    98,    40,    99,   100,    55,   120,    41,    40,
      42,    28,    43,    44,    45,   121,    40,   122,    41,   125,
      15,    16,    17,    18,    41,   -51,    42,    28,    43,    44,
      45,    41,   137,    40,   -49,   134,    42,    28,    43,    44,
      45,   135,    42,    28,    43,    44,    45,   -46,    41,    42,
      28,    43,    44,    45,   139,   140,    -4,     1,   141,    -4,
      -4,    -4,    -4,    -4,    -4,   148,    42,    28,    43,    44,
      45,   152,   -10,     5,   144,     6,     7,   -10,   -10,   -10,
     -10,    -2,    14,   147,   145,   151,    15,    16,    17,    18,
      78
};

static const yytype_uint8 yycheck[] =
{
      21,    33,     9,    76,    23,     0,    20,    16,    16,    41,
      36,    20,    20,    62,    63,     1,    37,    36,    32,     5,
       6,     7,     8,     9,    10,    32,    12,    13,    14,    15,
      16,     1,    32,    59,    23,    24,    25,    26,     1,    21,
      22,    73,    35,     5,     6,     7,     8,    17,    34,    35,
      36,    37,    38,    60,    17,    76,    29,    30,    31,     1,
      35,   134,   135,    33,    32,    97,    32,     1,    27,    28,
      33,    35,   145,    34,    16,    17,    68,    69,   151,    32,
     112,   102,    16,    24,   116,   117,   118,    64,    65,    66,
      67,   123,    34,    35,    36,    37,    38,    32,    32,   131,
      34,    35,    36,    37,    38,   137,    32,   128,    17,   141,
      14,   118,     1,   134,   135,   147,     5,     6,     7,     8,
      70,    71,    72,    16,   145,    17,    17,     1,    17,    15,
     151,     5,     6,     7,     8,     9,    10,    32,    12,    13,
      14,    15,    16,     1,    16,    16,    16,     5,     6,     7,
       8,     9,    10,     1,    12,    13,    14,    32,    16,     1,
      34,    35,    36,    37,    38,    32,     1,    32,    16,    32,
       5,     6,     7,     8,    16,    17,    34,    35,    36,    37,
      38,    16,    32,     1,    32,    17,    34,    35,    36,    37,
      38,    17,    34,    35,    36,    37,    38,    32,    16,    34,
      35,    36,    37,    38,   134,   135,     0,     1,    20,     3,
       4,     5,     6,     7,     8,   145,    34,    35,    36,    37,
      38,   151,     0,     1,    32,     3,     4,     5,     6,     7,
       8,     0,     1,    32,    11,    17,     5,     6,     7,     8,
      60
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    40,    41,     0,     1,     3,     4,    42,    43,
      32,    23,    36,    35,     1,     5,     6,     7,     8,    44,
      45,    46,    47,    35,    32,    34,    32,    32,    35,    65,
      24,    32,    16,    20,    32,     1,    17,    46,    48,    49,
       1,    16,    34,    36,    37,    38,    57,    59,    60,    61,
      62,    63,    64,    65,    17,    14,    50,    65,     1,    17,
      33,    59,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    16,     1,    15,    51,    50,    49,    17,
      61,    61,    62,    62,    62,    62,    63,    63,    64,    64,
      64,     1,    17,    58,    59,    15,     1,     9,    10,    12,
      13,    15,    46,    50,    52,    56,    57,    59,    65,    17,
       1,    17,    33,    32,    32,    59,    16,    16,    16,    65,
      32,    32,    32,    20,    59,    32,    59,    59,    46,    53,
      59,    20,    32,    59,    17,    17,    65,    32,    59,    52,
      52,    20,    54,    59,    32,    11,    59,    32,    52,    55,
      59,    17,    52
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    40,    41,    41,    42,    42,    42,    42,
      43,    43,    44,    44,    44,    45,    45,    46,    46,    46,
      46,    47,    47,    47,    48,    48,    48,    49,    50,    50,
      50,    51,    51,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    53,    53,    53,    54,
      54,    55,    55,    56,    57,    57,    57,    58,    58,    58,
      59,    60,    60,    60,    61,    61,    61,    61,    61,    62,
      62,    62,    63,    63,    63,    63,    64,    64,    64,    64,
      64,    64,    64,    64,    65
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     0,     2,     3,     4,     5,     2,
       0,     2,     2,     1,     2,     2,     4,     1,     1,     1,
       1,     6,     5,     5,     1,     3,     2,     2,     3,     2,
       3,     0,     2,     1,     2,     2,     2,     3,     2,     3,
       5,     5,     7,     5,     9,     2,     0,     1,     4,     0,
       1,     0,     1,     3,     3,     4,     4,     1,     3,     2,
       1,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     1,     1,     1,
       1,     3,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: preprocessor_directives declaration_list  */
#line 72 "parser.y"
    {
        if (error_count == 0) {
            printf("\n=== ANÁLISIS COMPLETADO EXITOSAMENTE ===\n");
            printf("Total de errores: %d\n", error_count);
        } else {
            printf("\n=== ANÁLISIS COMPLETADO CON %d ERRORES ===\n", error_count);
        }
    }
#line 1424 "y.tab.c"
    break;

  case 3: /* program: error  */
#line 81 "parser.y"
    {
        report_error("Error fatal en el programa", NULL);
        YYABORT;
    }
#line 1433 "y.tab.c"
    break;

  case 6: /* preprocessor_directive: INCLUDE STRING SEMICOLON  */
#line 94 "parser.y"
    {
        log_analysis("Directiva #include procesada");
    }
#line 1441 "y.tab.c"
    break;

  case 7: /* preprocessor_directive: DEFINE IDENTIFIER NUMBER SEMICOLON  */
#line 98 "parser.y"
    {
        log_analysis("Directiva #define procesada");
    }
#line 1449 "y.tab.c"
    break;

  case 8: /* preprocessor_directive: INCLUDE LT IDENTIFIER GT SEMICOLON  */
#line 102 "parser.y"
    {
        log_analysis("Directiva #include con <> procesada");
    }
#line 1457 "y.tab.c"
    break;

  case 9: /* preprocessor_directive: error SEMICOLON  */
#line 106 "parser.y"
    {
        report_error("Error en directiva de preprocesador", yytext);
        yyerrok;
    }
#line 1466 "y.tab.c"
    break;

  case 12: /* declaration: global_declaration SEMICOLON  */
#line 119 "parser.y"
    {
        log_analysis("Declaración global completada");
    }
#line 1474 "y.tab.c"
    break;

  case 13: /* declaration: function_declaration  */
#line 123 "parser.y"
    {
        log_analysis("Declaración de función completada");
    }
#line 1482 "y.tab.c"
    break;

  case 14: /* declaration: error SEMICOLON  */
#line 127 "parser.y"
    {
        report_error("Error en declaración", yytext);
        yyerrok;
    }
#line 1491 "y.tab.c"
    break;

  case 15: /* global_declaration: type identifier  */
#line 135 "parser.y"
    {
        log_analysis("Variable global declarada");
    }
#line 1499 "y.tab.c"
    break;

  case 16: /* global_declaration: type identifier ASSIGN expression  */
#line 139 "parser.y"
    {
        log_analysis("Variable global declarada e inicializada");
    }
#line 1507 "y.tab.c"
    break;

  case 17: /* type: INT  */
#line 145 "parser.y"
        { (yyval.string) = "int"; }
#line 1513 "y.tab.c"
    break;

  case 18: /* type: FLOAT  */
#line 146 "parser.y"
            { (yyval.string) = "float"; }
#line 1519 "y.tab.c"
    break;

  case 19: /* type: CHAR  */
#line 147 "parser.y"
           { (yyval.string) = "char"; }
#line 1525 "y.tab.c"
    break;

  case 20: /* type: VOID  */
#line 148 "parser.y"
           { (yyval.string) = "void"; }
#line 1531 "y.tab.c"
    break;

  case 21: /* function_declaration: type identifier LPAREN parameter_list RPAREN block  */
#line 153 "parser.y"
    {
        log_analysis("Definición de función con parámetros completada");
    }
#line 1539 "y.tab.c"
    break;

  case 22: /* function_declaration: type identifier LPAREN RPAREN block  */
#line 157 "parser.y"
    {
        log_analysis("Definición de función sin parámetros completada");
    }
#line 1547 "y.tab.c"
    break;

  case 23: /* function_declaration: type identifier LPAREN error RPAREN  */
#line 161 "parser.y"
    {
        report_error("Error en lista de parámetros de función", yytext);
    }
#line 1555 "y.tab.c"
    break;

  case 26: /* parameter_list: parameter_list error  */
#line 170 "parser.y"
    {
        report_error("Error en lista de parámetros", yytext);
    }
#line 1563 "y.tab.c"
    break;

  case 27: /* parameter: type identifier  */
#line 177 "parser.y"
    {
        log_analysis("Parámetro de función declarado");
    }
#line 1571 "y.tab.c"
    break;

  case 28: /* block: LBRACE statement_list RBRACE  */
#line 184 "parser.y"
    {
        log_analysis("Bloque de código completado");
    }
#line 1579 "y.tab.c"
    break;

  case 29: /* block: LBRACE RBRACE  */
#line 188 "parser.y"
    {
        log_analysis("Bloque vacío completado");
    }
#line 1587 "y.tab.c"
    break;

  case 30: /* block: LBRACE error RBRACE  */
#line 192 "parser.y"
    {
        report_error("Error en bloque de código", yytext);
    }
#line 1595 "y.tab.c"
    break;

  case 34: /* statement: expression SEMICOLON  */
#line 205 "parser.y"
    {
        log_analysis("Expresión procesada");
    }
#line 1603 "y.tab.c"
    break;

  case 35: /* statement: assignment SEMICOLON  */
#line 209 "parser.y"
    {
        log_analysis("Asignación completada");
    }
#line 1611 "y.tab.c"
    break;

  case 36: /* statement: function_call SEMICOLON  */
#line 213 "parser.y"
    {
        log_analysis("Llamada a función procesada");
    }
#line 1619 "y.tab.c"
    break;

  case 37: /* statement: RETURN expression SEMICOLON  */
#line 217 "parser.y"
    {
        log_analysis("Sentencia return con valor");
    }
#line 1627 "y.tab.c"
    break;

  case 38: /* statement: RETURN SEMICOLON  */
#line 221 "parser.y"
    {
        log_analysis("Sentencia return sin valor");
    }
#line 1635 "y.tab.c"
    break;

  case 39: /* statement: type identifier SEMICOLON  */
#line 225 "parser.y"
    {
        log_analysis("Variable local declarada");
    }
#line 1643 "y.tab.c"
    break;

  case 40: /* statement: type identifier ASSIGN expression SEMICOLON  */
#line 229 "parser.y"
    {
        log_analysis("Variable local declarada e inicializada");
    }
#line 1651 "y.tab.c"
    break;

  case 41: /* statement: IF LPAREN expression RPAREN statement  */
#line 233 "parser.y"
    {
        log_analysis("Sentencia if procesada");
    }
#line 1659 "y.tab.c"
    break;

  case 42: /* statement: IF LPAREN expression RPAREN statement ELSE statement  */
#line 237 "parser.y"
    {
        log_analysis("Sentencia if-else procesada");
    }
#line 1667 "y.tab.c"
    break;

  case 43: /* statement: WHILE LPAREN expression RPAREN statement  */
#line 241 "parser.y"
    {
        log_analysis("Sentencia while procesada");
    }
#line 1675 "y.tab.c"
    break;

  case 44: /* statement: FOR LPAREN for_init SEMICOLON for_cond SEMICOLON for_iter RPAREN statement  */
#line 245 "parser.y"
    {
        log_analysis("Sentencia for procesada");
    }
#line 1683 "y.tab.c"
    break;

  case 45: /* statement: error SEMICOLON  */
#line 249 "parser.y"
    {
        report_error("Error en sentencia", yytext);
        yyerrok;
    }
#line 1692 "y.tab.c"
    break;

  case 53: /* assignment: identifier ASSIGN expression  */
#line 273 "parser.y"
    {
        log_analysis("Asignación a variable procesada");
    }
#line 1700 "y.tab.c"
    break;

  case 54: /* function_call: identifier LPAREN RPAREN  */
#line 280 "parser.y"
    {
        log_analysis("Llamada a función sin argumentos");
    }
#line 1708 "y.tab.c"
    break;

  case 55: /* function_call: identifier LPAREN argument_list RPAREN  */
#line 284 "parser.y"
    {
        log_analysis("Llamada a función con argumentos");
    }
#line 1716 "y.tab.c"
    break;

  case 56: /* function_call: identifier LPAREN error RPAREN  */
#line 288 "parser.y"
    {
        report_error("Error en argumentos de función", yytext);
    }
#line 1724 "y.tab.c"
    break;

  case 59: /* argument_list: argument_list error  */
#line 297 "parser.y"
    {
        report_error("Error en lista de argumentos", yytext);
    }
#line 1732 "y.tab.c"
    break;

  case 62: /* logical_expression: logical_expression EQ relational_expression  */
#line 309 "parser.y"
    {
        log_analysis("Operación de igualdad");
    }
#line 1740 "y.tab.c"
    break;

  case 63: /* logical_expression: logical_expression NEQ relational_expression  */
#line 313 "parser.y"
    {
        log_analysis("Operación de desigualdad");
    }
#line 1748 "y.tab.c"
    break;

  case 65: /* relational_expression: relational_expression LT additive_expression  */
#line 321 "parser.y"
    {
        log_analysis("Operación menor que");
    }
#line 1756 "y.tab.c"
    break;

  case 66: /* relational_expression: relational_expression GT additive_expression  */
#line 325 "parser.y"
    {
        log_analysis("Operación mayor que");
    }
#line 1764 "y.tab.c"
    break;

  case 67: /* relational_expression: relational_expression LEQ additive_expression  */
#line 329 "parser.y"
    {
        log_analysis("Operación menor o igual que");
    }
#line 1772 "y.tab.c"
    break;

  case 68: /* relational_expression: relational_expression GEQ additive_expression  */
#line 333 "parser.y"
    {
        log_analysis("Operación mayor o igual que");
    }
#line 1780 "y.tab.c"
    break;

  case 70: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 341 "parser.y"
    {
        log_analysis("Operación aritmética: suma");
    }
#line 1788 "y.tab.c"
    break;

  case 71: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 345 "parser.y"
    {
        log_analysis("Operación aritmética: resta");
    }
#line 1796 "y.tab.c"
    break;

  case 73: /* multiplicative_expression: multiplicative_expression MULTIPLY primary_expression  */
#line 353 "parser.y"
    {
        log_analysis("Operación aritmética: multiplicación");
    }
#line 1804 "y.tab.c"
    break;

  case 74: /* multiplicative_expression: multiplicative_expression DIVIDE primary_expression  */
#line 357 "parser.y"
    {
        log_analysis("Operación aritmética: división");
    }
#line 1812 "y.tab.c"
    break;

  case 75: /* multiplicative_expression: multiplicative_expression MOD primary_expression  */
#line 361 "parser.y"
    {
        log_analysis("Operación aritmética: módulo");
    }
#line 1820 "y.tab.c"
    break;

  case 76: /* primary_expression: identifier  */
#line 368 "parser.y"
    {
        log_analysis("Identificador referenciado");
    }
#line 1828 "y.tab.c"
    break;

  case 77: /* primary_expression: NUMBER  */
#line 372 "parser.y"
    {
        log_analysis("Constante entera");
    }
#line 1836 "y.tab.c"
    break;

  case 78: /* primary_expression: REAL  */
#line 376 "parser.y"
    {
        log_analysis("Constante real");
    }
#line 1844 "y.tab.c"
    break;

  case 79: /* primary_expression: CHAR_LITERAL  */
#line 380 "parser.y"
    {
        log_analysis("Constante carácter");
    }
#line 1852 "y.tab.c"
    break;

  case 80: /* primary_expression: STRING  */
#line 384 "parser.y"
    {
        log_analysis("Literal de cadena");
    }
#line 1860 "y.tab.c"
    break;

  case 83: /* primary_expression: error  */
#line 390 "parser.y"
    {
        report_error("Error en expresión primaria", yytext);
    }
#line 1868 "y.tab.c"
    break;

  case 84: /* identifier: IDENTIFIER  */
#line 396 "parser.y"
               { (yyval.string) = (yyvsp[0].string); }
#line 1874 "y.tab.c"
    break;


#line 1878 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 399 "parser.y"


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
