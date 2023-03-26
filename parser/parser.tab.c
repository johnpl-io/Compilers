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
#line 4 "parser.y"
    
    #define YYDEBUG 1
    #include <stdlib.h>
    #include <stdio.h>
    #include <ctype.h>
    #include "ast.h"
    #include "symbtab.h"
    #include "symbtabinsert.h"
    int yylex();
    void yyerror (char const *s) {
        fprintf (stderr, "%s\n", s);
 }
    // typedef union yylval YYSTYPE

    // line number and filename for debugging
    extern char filename_buf[256];
    extern int lineno;

    // keep track of current scope, initially at global scope
    struct symbtab *current_scope;

#line 93 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENT = 3,                      /* IDENT  */
  YYSYMBOL_CHARLIT = 4,                    /* CHARLIT  */
  YYSYMBOL_STRING = 5,                     /* STRING  */
  YYSYMBOL_NUMBER = 6,                     /* NUMBER  */
  YYSYMBOL_INDSEL = 7,                     /* INDSEL  */
  YYSYMBOL_PLUSPLUS = 8,                   /* PLUSPLUS  */
  YYSYMBOL_MINUSMINUS = 9,                 /* MINUSMINUS  */
  YYSYMBOL_SHL = 10,                       /* SHL  */
  YYSYMBOL_SHR = 11,                       /* SHR  */
  YYSYMBOL_LTEQ = 12,                      /* LTEQ  */
  YYSYMBOL_GTEQ = 13,                      /* GTEQ  */
  YYSYMBOL_EQEQ = 14,                      /* EQEQ  */
  YYSYMBOL_NOTEQ = 15,                     /* NOTEQ  */
  YYSYMBOL_LOGAND = 16,                    /* LOGAND  */
  YYSYMBOL_LOGOR = 17,                     /* LOGOR  */
  YYSYMBOL_ELLIPSIS = 18,                  /* ELLIPSIS  */
  YYSYMBOL_TIMESEQ = 19,                   /* TIMESEQ  */
  YYSYMBOL_DIVEQ = 20,                     /* DIVEQ  */
  YYSYMBOL_MODEQ = 21,                     /* MODEQ  */
  YYSYMBOL_PLUSEQ = 22,                    /* PLUSEQ  */
  YYSYMBOL_MINUSEQ = 23,                   /* MINUSEQ  */
  YYSYMBOL_SHLEQ = 24,                     /* SHLEQ  */
  YYSYMBOL_SHREQ = 25,                     /* SHREQ  */
  YYSYMBOL_ANDEQ = 26,                     /* ANDEQ  */
  YYSYMBOL_OREQ = 27,                      /* OREQ  */
  YYSYMBOL_XOREQ = 28,                     /* XOREQ  */
  YYSYMBOL_AUTO = 29,                      /* AUTO  */
  YYSYMBOL_BREAK = 30,                     /* BREAK  */
  YYSYMBOL_CASE = 31,                      /* CASE  */
  YYSYMBOL_CHAR = 32,                      /* CHAR  */
  YYSYMBOL_CONST = 33,                     /* CONST  */
  YYSYMBOL_CONTINUE = 34,                  /* CONTINUE  */
  YYSYMBOL_DEFAULT = 35,                   /* DEFAULT  */
  YYSYMBOL_DO = 36,                        /* DO  */
  YYSYMBOL_DOUBLE = 37,                    /* DOUBLE  */
  YYSYMBOL_ELSE = 38,                      /* ELSE  */
  YYSYMBOL_ENUM = 39,                      /* ENUM  */
  YYSYMBOL_EXTERN = 40,                    /* EXTERN  */
  YYSYMBOL_FLOAT = 41,                     /* FLOAT  */
  YYSYMBOL_FOR = 42,                       /* FOR  */
  YYSYMBOL_GOTO = 43,                      /* GOTO  */
  YYSYMBOL_IF = 44,                        /* IF  */
  YYSYMBOL_INLINE = 45,                    /* INLINE  */
  YYSYMBOL_INT = 46,                       /* INT  */
  YYSYMBOL_LONG = 47,                      /* LONG  */
  YYSYMBOL_REGISTER = 48,                  /* REGISTER  */
  YYSYMBOL_RESTRICT = 49,                  /* RESTRICT  */
  YYSYMBOL_RETURN = 50,                    /* RETURN  */
  YYSYMBOL_SHORT = 51,                     /* SHORT  */
  YYSYMBOL_SIGNED = 52,                    /* SIGNED  */
  YYSYMBOL_SIZEOF = 53,                    /* SIZEOF  */
  YYSYMBOL_STATIC = 54,                    /* STATIC  */
  YYSYMBOL_STRUCT = 55,                    /* STRUCT  */
  YYSYMBOL_SWITCH = 56,                    /* SWITCH  */
  YYSYMBOL_TYPEDEF = 57,                   /* TYPEDEF  */
  YYSYMBOL_UNION = 58,                     /* UNION  */
  YYSYMBOL_UNSIGNED = 59,                  /* UNSIGNED  */
  YYSYMBOL_VOID = 60,                      /* VOID  */
  YYSYMBOL_VOLATILE = 61,                  /* VOLATILE  */
  YYSYMBOL_WHILE = 62,                     /* WHILE  */
  YYSYMBOL__BOOL = 63,                     /* _BOOL  */
  YYSYMBOL__COMPLEX = 64,                  /* _COMPLEX  */
  YYSYMBOL__IMAGINARY = 65,                /* _IMAGINARY  */
  YYSYMBOL_66_ = 66,                       /* '!'  */
  YYSYMBOL_67_ = 67,                       /* '^'  */
  YYSYMBOL_68_ = 68,                       /* '&'  */
  YYSYMBOL_69_ = 69,                       /* '*'  */
  YYSYMBOL_70_ = 70,                       /* '-'  */
  YYSYMBOL_71_ = 71,                       /* '+'  */
  YYSYMBOL_72_ = 72,                       /* '='  */
  YYSYMBOL_73_ = 73,                       /* '~'  */
  YYSYMBOL_74_ = 74,                       /* '|'  */
  YYSYMBOL_75_ = 75,                       /* '.'  */
  YYSYMBOL_76_ = 76,                       /* '<'  */
  YYSYMBOL_77_ = 77,                       /* '>'  */
  YYSYMBOL_78_ = 78,                       /* '/'  */
  YYSYMBOL_79_ = 79,                       /* '?'  */
  YYSYMBOL_80_ = 80,                       /* '('  */
  YYSYMBOL_81_ = 81,                       /* ')'  */
  YYSYMBOL_82_ = 82,                       /* '['  */
  YYSYMBOL_83_ = 83,                       /* ']'  */
  YYSYMBOL_84_ = 84,                       /* '{'  */
  YYSYMBOL_85_ = 85,                       /* '}'  */
  YYSYMBOL_86_ = 86,                       /* '%'  */
  YYSYMBOL_87_ = 87,                       /* ','  */
  YYSYMBOL_88_ = 88,                       /* ';'  */
  YYSYMBOL_89_ = 89,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 90,                  /* $accept  */
  YYSYMBOL_start = 91,                     /* start  */
  YYSYMBOL_declaration_or_fndef = 92,      /* declaration_or_fndef  */
  YYSYMBOL_function_definition = 93,       /* function_definition  */
  YYSYMBOL_94_1 = 94,                      /* $@1  */
  YYSYMBOL_95_2 = 95,                      /* $@2  */
  YYSYMBOL_compound_statement = 96,        /* compound_statement  */
  YYSYMBOL_97_3 = 97,                      /* $@3  */
  YYSYMBOL_98_4 = 98,                      /* $@4  */
  YYSYMBOL_decl_or_stmt_list = 99,         /* decl_or_stmt_list  */
  YYSYMBOL_decl_or_stmt = 100,             /* decl_or_stmt  */
  YYSYMBOL_stmt = 101,                     /* stmt  */
  YYSYMBOL_102_primary_expression = 102,   /* primary-expression  */
  YYSYMBOL_103_postfix_expression = 103,   /* postfix-expression  */
  YYSYMBOL_104_expression_list = 104,      /* expression-list  */
  YYSYMBOL_105_unary_expression = 105,     /* unary-expression  */
  YYSYMBOL_106_unary_operator = 106,       /* unary-operator  */
  YYSYMBOL_107_cast_expression = 107,      /* cast-expression  */
  YYSYMBOL_108_mult_expression = 108,      /* mult-expression  */
  YYSYMBOL_109_add_expression = 109,       /* add-expression  */
  YYSYMBOL_110_shift_expression = 110,     /* shift-expression  */
  YYSYMBOL_111_relational_expression = 111, /* relational-expression  */
  YYSYMBOL_112_equality_expression = 112,  /* equality-expression  */
  YYSYMBOL_113_bitwise_or_expression = 113, /* bitwise-or-expression  */
  YYSYMBOL_114_bitwise_xor_expression = 114, /* bitwise-xor-expression  */
  YYSYMBOL_115_bitwise_and_expression = 115, /* bitwise-and-expression  */
  YYSYMBOL_116_logical_or_expression = 116, /* logical-or-expression  */
  YYSYMBOL_117_logical_and_expression = 117, /* logical-and-expression  */
  YYSYMBOL_118_conditional_expression = 118, /* conditional-expression  */
  YYSYMBOL_119_assignment_expression = 119, /* assignment-expression  */
  YYSYMBOL_120_assignment_operator = 120,  /* assignment-operator  */
  YYSYMBOL_expression = 121,               /* expression  */
  YYSYMBOL_declaration = 122,              /* declaration  */
  YYSYMBOL_123_declaration_specifiers = 123, /* declaration-specifiers  */
  YYSYMBOL_124_init_declarator_list = 124, /* init-declarator-list  */
  YYSYMBOL_125_init_declarator = 125,      /* init-declarator  */
  YYSYMBOL_126_storage_class_specifier = 126, /* storage-class-specifier  */
  YYSYMBOL_127_type_specifier = 127,       /* type-specifier  */
  YYSYMBOL_128_struct_or_union_specifier = 128, /* struct-or-union-specifier  */
  YYSYMBOL_129_5 = 129,                    /* $@5  */
  YYSYMBOL_130_struct_or_union = 130,      /* struct-or-union  */
  YYSYMBOL_131_struct_declaration_list = 131, /* struct-declaration-list  */
  YYSYMBOL_132_struct_declaration = 132,   /* struct-declaration  */
  YYSYMBOL_133_specifier_qualifier_list = 133, /* specifier-qualifier-list  */
  YYSYMBOL_134_struct_declarator_list = 134, /* struct-declarator-list  */
  YYSYMBOL_135_struct_declarator = 135,    /* struct-declarator  */
  YYSYMBOL_136_enum_specifier = 136,       /* enum-specifier  */
  YYSYMBOL_137_enumerator_list = 137,      /* enumerator-list  */
  YYSYMBOL_enumerator = 138,               /* enumerator  */
  YYSYMBOL_139_type_qualifier = 139,       /* type-qualifier  */
  YYSYMBOL_140_function_specifier = 140,   /* function-specifier  */
  YYSYMBOL_declarator = 141,               /* declarator  */
  YYSYMBOL_142_direct_declarator = 142,    /* direct-declarator  */
  YYSYMBOL_pointer = 143,                  /* pointer  */
  YYSYMBOL_144_type_qualifier_list = 144,  /* type-qualifier-list  */
  YYSYMBOL_145_parameter_type_list = 145,  /* parameter-type-list  */
  YYSYMBOL_146_parameter_list = 146,       /* parameter-list  */
  YYSYMBOL_147_parameter_declaration = 147, /* parameter-declaration  */
  YYSYMBOL_148_identifier_list = 148,      /* identifier-list  */
  YYSYMBOL_149_type_name = 149,            /* type-name  */
  YYSYMBOL_150_abstract_declarator = 150,  /* abstract-declarator  */
  YYSYMBOL_151_direct_abstract_declarator = 151, /* direct-abstract-declarator  */
  YYSYMBOL_initializer = 152,              /* initializer  */
  YYSYMBOL_153_initializer_list = 153,     /* initializer-list  */
  YYSYMBOL_designation = 154,              /* designation  */
  YYSYMBOL_155_designator_list = 155,      /* designator-list  */
  YYSYMBOL_designator = 156                /* designator  */
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
typedef yytype_int16 yy_state_t;

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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  39
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1122

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  209
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  322

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   320


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
       2,     2,     2,    66,     2,     2,     2,    86,    68,     2,
      80,    81,    69,    71,    87,    70,    75,    78,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,    88,
      76,    72,    77,    79,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    82,     2,    83,    67,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    74,    85,    73,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    78,    78,    79,    82,    83,    85,    86,    85,    90,
      90,    90,    94,    95,    98,    99,   101,   102,   106,   107,
     108,   111,   112,   115,   116,   117,   118,   119,   120,   121,
     122,   125,   126,   130,   131,   132,   133,   134,   137,   138,
     139,   140,   141,   142,   144,   145,   149,   150,   151,   152,
     155,   156,   157,   160,   161,   162,   165,   166,   167,   168,
     169,   172,   173,   174,   177,   178,   181,   182,   185,   186,
     189,   190,   193,   194,   197,   198,   201,   202,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   218,
     219,   225,   227,   230,   231,   232,   233,   234,   235,   236,
     237,   240,   241,   244,   245,   249,   250,   251,   252,   253,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   277,   277,   278,   279,   282,   283,
     286,   289,   292,   295,   296,   297,   298,   300,   301,   303,
     304,   307,   314,   315,   316,   318,   319,   322,   323,   328,
     329,   330,   333,   337,   338,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   357,
     358,   359,   360,   363,   364,   367,   368,   371,   372,   375,
     376,   377,   380,   381,   385,   386,   389,   390,   391,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   410,   411,
     412,   415,   416,   417,   418,   421,   424,   425,   428,   429
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENT", "CHARLIT",
  "STRING", "NUMBER", "INDSEL", "PLUSPLUS", "MINUSMINUS", "SHL", "SHR",
  "LTEQ", "GTEQ", "EQEQ", "NOTEQ", "LOGAND", "LOGOR", "ELLIPSIS",
  "TIMESEQ", "DIVEQ", "MODEQ", "PLUSEQ", "MINUSEQ", "SHLEQ", "SHREQ",
  "ANDEQ", "OREQ", "XOREQ", "AUTO", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT",
  "FOR", "GOTO", "IF", "INLINE", "INT", "LONG", "REGISTER", "RESTRICT",
  "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH",
  "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE", "_BOOL",
  "_COMPLEX", "_IMAGINARY", "'!'", "'^'", "'&'", "'*'", "'-'", "'+'",
  "'='", "'~'", "'|'", "'.'", "'<'", "'>'", "'/'", "'?'", "'('", "')'",
  "'['", "']'", "'{'", "'}'", "'%'", "','", "';'", "':'", "$accept",
  "start", "declaration_or_fndef", "function_definition", "$@1", "$@2",
  "compound_statement", "$@3", "$@4", "decl_or_stmt_list", "decl_or_stmt",
  "stmt", "primary-expression", "postfix-expression", "expression-list",
  "unary-expression", "unary-operator", "cast-expression",
  "mult-expression", "add-expression", "shift-expression",
  "relational-expression", "equality-expression", "bitwise-or-expression",
  "bitwise-xor-expression", "bitwise-and-expression",
  "logical-or-expression", "logical-and-expression",
  "conditional-expression", "assignment-expression", "assignment-operator",
  "expression", "declaration", "declaration-specifiers",
  "init-declarator-list", "init-declarator", "storage-class-specifier",
  "type-specifier", "struct-or-union-specifier", "$@5", "struct-or-union",
  "struct-declaration-list", "struct-declaration",
  "specifier-qualifier-list", "struct-declarator-list",
  "struct-declarator", "enum-specifier", "enumerator-list", "enumerator",
  "type-qualifier", "function-specifier", "declarator",
  "direct-declarator", "pointer", "type-qualifier-list",
  "parameter-type-list", "parameter-list", "parameter-declaration",
  "identifier-list", "type-name", "abstract-declarator",
  "direct-abstract-declarator", "initializer", "initializer-list",
  "designation", "designator-list", "designator", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-193)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-125)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1023,  -193,  -193,  -193,  -193,    15,  -193,  -193,  -193,  -193,
    -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,
    -193,  -193,  -193,  -193,  -193,   797,  -193,  -193,  -193,     5,
    1023,  1023,  -193,    16,  -193,  1023,  1023,   -67,    69,  -193,
    -193,  -193,    95,    50,  -193,   -47,  -193,   -34,   -20,    42,
    -193,  -193,   -37,  1057,  -193,  -193,    69,   -28,    -1,  -193,
    -193,  -193,    95,    29,    50,  -193,   356,     8,   542,   384,
     -20,    39,  1057,   872,  -193,     9,  1057,    54,   697,    11,
    -193,  -193,  -193,  -193,    74,  -193,  -193,  -193,  -193,   716,
     716,    73,  -193,  -193,  -193,  -193,  -193,  -193,   697,   302,
    -193,   141,   376,   697,  -193,    65,   120,   159,    56,   180,
      83,    98,   110,    41,   166,  -193,  -193,  -193,  -193,  -193,
    -193,  -193,    36,   105,   109,  -193,   -65,   678,   118,  -193,
     137,   438,  1057,  -193,  -193,  -193,   697,   112,  -193,   135,
    -193,  -193,    69,  -193,  -193,  -193,  -193,   148,  -193,  -193,
     605,  -193,   -17,   228,   697,  -193,    90,   356,    91,  -193,
     229,  -193,  -193,   233,   551,   697,  -193,  -193,  -193,  -193,
    -193,  -193,  -193,  -193,  -193,  -193,  -193,   697,  -193,   697,
     697,   697,   697,   697,   697,   697,   697,   697,   697,   697,
     697,   697,   697,   697,   697,   697,   697,   697,   283,  -193,
     483,   751,  -193,    24,  -193,    99,  -193,   986,  -193,   234,
     155,   678,  -193,  -193,   697,   156,  -193,   160,   907,  -193,
       9,  -193,   697,   697,     3,   -15,   163,  -193,   697,  -193,
     162,  -193,   200,  -193,  -193,  -193,  -193,  -193,  -193,    81,
    -193,    20,  -193,  -193,  -193,  -193,    65,    65,   120,   120,
     159,   159,   159,   159,    56,    56,    98,   110,   180,   166,
      96,    83,  -193,   283,  -193,  -193,   130,  -193,     5,   165,
     167,   168,   169,    99,   948,   410,  -193,  -193,  -193,  -193,
     171,   172,  -193,  -193,  -193,  -193,  -193,  -193,   834,   107,
    -193,  -193,  -193,  -193,  -193,  -193,   356,  -193,   697,  -193,
     697,   164,  -193,  -193,  -193,  -193,  -193,  -193,  -193,   176,
     177,  -193,   178,  -193,  -193,  -193,  -193,  -193,  -193,  -193,
    -193,  -193
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   108,   111,   149,   116,     0,   106,   115,   152,   113,
     114,   109,   150,   112,   117,   107,   128,   105,   129,   118,
     110,   151,   119,   120,   121,     0,     2,     5,     4,     0,
      94,    96,   122,     0,   123,    98,   100,   144,     0,     1,
       3,   155,   169,     0,    92,     0,   101,   103,   154,     0,
      93,    95,   127,     0,    97,    99,     0,   147,     0,   145,
     173,   172,   170,     0,     0,    91,     0,     0,     0,     0,
     153,     0,   134,     0,   130,     0,   136,     0,     0,     0,
     174,   171,   156,   102,   103,    18,    21,    20,    19,     0,
       0,     0,    40,    42,    43,    38,    39,    41,     0,     0,
      23,    33,    44,     0,    46,    50,    53,    56,    61,    68,
      72,    64,    66,    74,    70,    76,   198,   104,     9,     7,
     182,   168,   181,     0,   175,   177,     0,     0,    43,   165,
       0,     0,     0,   133,   126,   131,     0,     0,   137,   139,
     135,   142,     0,    44,   148,   143,   146,     0,    34,    35,
       0,    89,     0,     0,     0,   202,     0,     0,     0,   206,
       0,    29,    30,     0,     0,     0,    81,    82,    83,    79,
      80,    84,    85,    86,    87,    88,    78,     0,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       0,     0,   179,   186,   180,   188,   166,     0,   167,     0,
       0,     0,   164,   158,     0,    43,   159,     0,     0,   141,
       0,   132,     0,     0,     0,   184,     0,    22,     0,   209,
       0,   199,     0,   201,   205,   207,    26,    25,    28,     0,
      31,     0,    77,    47,    48,    49,    52,    51,    54,    55,
      58,    60,    57,    59,    62,    63,    65,    67,    69,    71,
       0,    73,    16,    10,    12,    15,     0,    14,     0,     0,
       0,    43,     0,   187,     0,     0,   176,   178,   183,   161,
       0,     0,   163,   157,   125,   138,   140,    37,     0,   186,
     185,    45,    90,   208,   200,   204,     0,    27,     0,    24,
       0,     0,    13,    17,   196,   189,   194,   192,   197,     0,
      43,   191,     0,   160,   162,   203,    32,    75,    11,   195,
     193,   190
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -193,  -193,   225,  -193,  -193,  -193,   192,  -193,  -193,  -193,
       1,  -193,  -193,  -193,  -193,   -56,  -193,   -54,    44,    45,
      25,    43,    68,    70,    80,    72,  -193,    79,   -75,   -40,
    -193,   -83,  -175,     0,  -193,   212,  -193,   -21,  -193,  -193,
    -193,   145,   -66,   -48,  -193,    58,  -193,   223,   -59,     4,
    -193,   -27,   -43,   -41,   -13,   -64,  -193,    76,  -193,  -193,
    -113,  -192,   -94,  -193,    49,  -193,   132
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    25,    26,    27,    67,   199,   262,   198,   301,   263,
     264,   265,   100,   101,   239,   143,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   151,
     177,   224,    28,   122,    45,    46,    30,    31,    32,    71,
      33,    73,    74,    75,   137,   138,    34,    58,    59,    35,
      36,    63,    48,    49,    62,   269,   124,   125,   126,   226,
     270,   205,   117,   156,   157,   158,   159
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      29,    61,    47,   144,   123,   155,    70,   135,    41,   204,
     102,   273,    41,   102,    57,   152,   208,    56,    37,    52,
     146,    81,   209,   267,   133,    29,   116,    41,   140,   130,
      50,    51,    72,   148,   149,    54,    55,    84,    66,    41,
      64,    65,   102,   102,    78,    41,    60,  -124,   139,   178,
      -6,    72,    72,    41,    42,    72,   131,    76,   195,   116,
      68,   219,    69,   233,   227,   288,    80,   201,   186,   187,
     228,   102,    57,    60,    42,   102,    76,    76,    42,   230,
      76,   203,   241,   146,   287,    43,    79,   210,   267,    43,
     228,   217,   118,    44,   102,   202,   145,   273,   136,    38,
      53,   102,   225,   299,   200,    42,   201,   228,   102,   102,
      82,    72,   290,   260,   211,   266,   200,   116,   201,    42,
     196,   102,    43,   132,   240,   243,   244,   245,     3,    72,
      43,    60,   188,   189,   179,    80,    76,   242,   295,   141,
     102,   142,   102,   180,    12,   102,    66,   286,   160,   161,
     162,   181,   135,   150,    76,   102,    21,   192,   102,   203,
      70,   272,   297,   234,    42,   193,   153,   102,   298,   184,
     185,   280,   102,   154,   281,   231,   102,   232,   194,   274,
     266,   275,   197,   228,   289,   300,   206,   288,   292,   201,
     182,   183,   116,   139,   190,   191,   207,    72,   268,   220,
     221,   212,   315,    85,    86,    87,    88,   102,    89,    90,
     309,   250,   251,   252,   253,    80,   163,   228,   303,   102,
     213,   164,    76,   165,   222,   317,   246,   247,   223,   248,
     249,   229,   236,   254,   255,   312,   237,   278,   279,   282,
     102,    84,   102,   283,   291,   293,   304,   289,   305,   318,
      40,   306,   307,    91,   313,   314,   116,   319,   316,   119,
     320,   321,   258,   268,   302,   257,    92,   261,    93,    94,
      95,    96,   256,    97,   259,   153,    83,   218,   285,    77,
      98,   296,   154,   277,    99,   294,    85,    86,    87,    88,
     235,    89,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,    86,    87,    88,     0,
      89,    90,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,    11,    12,     0,    13,    14,    91,    15,    16,     0,
      17,    18,    19,    20,    21,     0,    22,    23,    24,    92,
       0,    93,    94,    95,    96,    91,    97,     0,     0,    85,
      86,    87,    88,    98,    89,    90,     0,   118,    92,     0,
      93,    94,    95,    96,     0,    97,     0,   153,     0,     0,
       0,     0,    98,     0,   154,     0,    99,    85,    86,    87,
      88,     0,    89,    90,     0,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,     0,     0,     0,     0,    91,
       0,     0,     0,    85,    86,    87,    88,     3,    89,    90,
       0,     0,    92,     0,    93,    94,    95,    96,     0,    97,
       0,     0,     0,    12,     0,     0,    98,    91,   127,     0,
      99,    85,    86,    87,    88,    21,    89,    90,   176,     0,
      92,     0,    93,   128,    95,    96,     0,    97,     0,     0,
       0,     0,     0,    91,    98,     0,     0,   129,     0,     0,
       0,     3,     0,     0,     0,     0,    92,     0,    93,   310,
      95,    96,     0,    97,     0,     0,    41,    12,     0,     0,
      98,    91,   214,   311,     0,     0,     0,     0,     0,    21,
       0,     0,     0,     0,    92,     0,    93,   215,    95,    96,
       0,    97,     1,     0,     0,     2,     3,     0,    98,     0,
       4,   216,     5,     6,     7,     0,     0,     0,     8,     9,
      10,    11,    12,     0,    13,    14,     0,    15,    16,     0,
      17,    18,    19,    20,    21,   120,    22,    23,    24,     0,
       0,     0,    42,     0,    85,    86,    87,    88,     0,    89,
      90,     0,     0,   200,     0,   201,     0,     0,     0,     0,
       0,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,    16,     0,    17,
      18,    19,    20,    21,    91,    22,    23,    24,    85,    86,
      87,    88,     0,    89,    90,     0,     0,    92,     0,    93,
      94,    95,    96,   121,    97,     0,     0,     0,     0,     0,
       0,    98,   238,     0,     0,     0,     0,     2,     3,     0,
       0,     0,     4,     0,     5,     0,     7,     0,     0,     0,
       0,     9,    10,     0,    12,     0,    13,    14,    91,     0,
      16,     0,     0,    18,    19,    20,    21,     0,    22,    23,
      24,    92,     0,    93,    94,    95,    96,     0,    97,     0,
       0,    85,    86,    87,    88,    98,    89,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,    86,    87,    88,     0,    89,    90,     0,     0,     0,
       0,     3,     0,     0,     0,     0,     0,     0,     0,    85,
      86,    87,    88,     0,    89,    90,     0,    12,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,    21,
       0,     0,     0,     0,    92,     0,    93,    94,    95,    96,
      91,    97,     0,     0,    85,    86,    87,    88,    98,    89,
      90,     0,     0,    92,     0,    93,    94,    95,    96,   147,
      97,     0,     0,     0,     0,     0,     0,    98,     0,     0,
       0,     0,    92,     0,    93,    94,    95,    96,     0,    97,
       0,     0,     0,     0,     0,     0,    98,    39,     0,     0,
       0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,     0,    93,
     271,    95,    96,     0,    97,     0,     1,     0,     0,     2,
       3,    98,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,    11,    12,     0,    13,    14,
       0,    15,    16,     0,    17,    18,    19,    20,    21,     0,
      22,    23,    24,     1,     0,     0,     2,     3,     0,     0,
       0,     4,     0,     5,     6,     7,     0,     0,     0,     8,
       9,    10,    11,    12,     0,    13,    14,     0,    15,    16,
       0,    17,    18,    19,    20,    21,     0,    22,    23,    24,
       0,     0,     0,    42,     2,     3,     0,     0,     0,     4,
       0,     5,     0,     7,   288,     0,   201,     0,     9,    10,
       0,    12,     0,    13,    14,     0,     0,    16,     0,     0,
      18,    19,    20,    21,     0,    22,    23,    24,     0,     2,
       3,     0,     0,     0,     4,     0,     5,     0,     7,     0,
       0,     0,     0,     9,    10,     0,    12,   134,    13,    14,
       0,     0,    16,     0,     0,    18,    19,    20,    21,     0,
      22,    23,    24,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     0,     0,     0,     4,     0,     5,     6,     7,
       0,     0,   284,     8,     9,    10,    11,    12,     0,    13,
      14,     0,    15,    16,   276,    17,    18,    19,    20,    21,
       0,    22,    23,    24,     0,     1,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     5,     6,     7,     0,   308,
       0,     8,     9,    10,    11,    12,     0,    13,    14,     0,
      15,    16,     0,    17,    18,    19,    20,    21,     0,    22,
      23,    24,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,    11,    12,     0,    13,    14,     0,    15,    16,     0,
      17,    18,    19,    20,    21,     0,    22,    23,    24,     2,
       3,     0,     0,     0,     4,     0,     5,     0,     7,     0,
       0,     0,     0,     9,    10,     0,    12,     0,    13,    14,
       0,     0,    16,     0,     0,    18,    19,    20,    21,     0,
      22,    23,    24
};

static const yytype_int16 yycheck[] =
{
       0,    42,    29,    78,    68,    99,    49,    73,     3,   122,
      66,   203,     3,    69,     3,    98,    81,    84,     3,     3,
      79,    62,    87,   198,    72,    25,    66,     3,    76,    69,
      30,    31,    53,    89,    90,    35,    36,    64,    72,     3,
      87,    88,    98,    99,    72,     3,    42,    84,    75,   103,
      84,    72,    73,     3,    69,    76,    69,    53,    17,    99,
      80,   136,    82,   157,    81,    80,    62,    82,    12,    13,
      87,   127,     3,    69,    69,   131,    72,    73,    69,   154,
      76,   122,   165,   142,    81,    80,    87,   127,   263,    80,
      87,   131,    84,    88,   150,   122,    85,   289,    89,    84,
      84,   157,   150,    83,    80,    69,    82,    87,   164,   165,
      81,   132,   225,   196,   127,   198,    80,   157,    82,    69,
      79,   177,    80,    84,   164,   179,   180,   181,    33,   150,
      80,   127,    76,    77,    69,   131,   132,   177,   232,    85,
     196,    87,   198,    78,    49,   201,    72,   222,     7,     8,
       9,    86,   218,    80,   150,   211,    61,    74,   214,   200,
     203,   201,    81,    72,    69,    67,    75,   223,    87,    10,
      11,   211,   228,    82,   214,    85,   232,    87,    68,    80,
     263,    82,    16,    87,   225,    89,    81,    80,   228,    82,
      70,    71,   232,   220,    14,    15,    87,   218,   198,    87,
      88,    83,   296,     3,     4,     5,     6,   263,     8,     9,
     274,   186,   187,   188,   189,   211,    75,    87,    88,   275,
      83,    80,   218,    82,    89,   300,   182,   183,    80,   184,
     185,     3,     3,   190,   191,   275,     3,     3,    83,    83,
     296,   268,   298,    83,    81,    83,    81,   288,    81,    85,
      25,    83,    83,    53,    83,    83,   296,    81,   298,    67,
      83,    83,   194,   263,   263,   193,    66,   197,    68,    69,
      70,    71,   192,    73,   195,    75,    64,   132,   220,    56,
      80,   232,    82,   207,    84,    85,     3,     4,     5,     6,
     158,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    29,    -1,    -1,    32,    33,    -1,    -1,    -1,
      37,    -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    -1,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    -1,    63,    64,    65,    66,
      -1,    68,    69,    70,    71,    53,    73,    -1,    -1,     3,
       4,     5,     6,    80,     8,     9,    -1,    84,    66,    -1,
      68,    69,    70,    71,    -1,    73,    -1,    75,    -1,    -1,
      -1,    -1,    80,    -1,    82,    -1,    84,     3,     4,     5,
       6,    -1,     8,     9,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,     3,     4,     5,     6,    33,     8,     9,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    -1,    73,
      -1,    -1,    -1,    49,    -1,    -1,    80,    53,    54,    -1,
      84,     3,     4,     5,     6,    61,     8,     9,    72,    -1,
      66,    -1,    68,    69,    70,    71,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    53,    80,    -1,    -1,    83,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    -1,    73,    -1,    -1,     3,    49,    -1,    -1,
      80,    53,    54,    83,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      -1,    73,    29,    -1,    -1,    32,    33,    -1,    80,    -1,
      37,    83,    39,    40,    41,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    -1,    51,    52,    -1,    54,    55,    -1,
      57,    58,    59,    60,    61,     3,    63,    64,    65,    -1,
      -1,    -1,    69,    -1,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    80,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    32,    33,    -1,    -1,    -1,    37,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    -1,    51,    52,    -1,    54,    55,    -1,    57,
      58,    59,    60,    61,    53,    63,    64,    65,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    81,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    37,    -1,    39,    -1,    41,    -1,    -1,    -1,
      -1,    46,    47,    -1,    49,    -1,    51,    52,    53,    -1,
      55,    -1,    -1,    58,    59,    60,    61,    -1,    63,    64,
      65,    66,    -1,    68,    69,    70,    71,    -1,    73,    -1,
      -1,     3,     4,     5,     6,    80,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    -1,    49,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      53,    73,    -1,    -1,     3,     4,     5,     6,    80,     8,
       9,    -1,    -1,    66,    -1,    68,    69,    70,    71,    53,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    80,     0,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    -1,    73,    -1,    29,    -1,    -1,    32,
      33,    80,    -1,    -1,    37,    -1,    39,    40,    41,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    -1,    51,    52,
      -1,    54,    55,    -1,    57,    58,    59,    60,    61,    -1,
      63,    64,    65,    29,    -1,    -1,    32,    33,    -1,    -1,
      -1,    37,    -1,    39,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    -1,    51,    52,    -1,    54,    55,
      -1,    57,    58,    59,    60,    61,    -1,    63,    64,    65,
      -1,    -1,    -1,    69,    32,    33,    -1,    -1,    -1,    37,
      -1,    39,    -1,    41,    80,    -1,    82,    -1,    46,    47,
      -1,    49,    -1,    51,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    60,    61,    -1,    63,    64,    65,    -1,    32,
      33,    -1,    -1,    -1,    37,    -1,    39,    -1,    41,    -1,
      -1,    -1,    -1,    46,    47,    -1,    49,    85,    51,    52,
      -1,    -1,    55,    -1,    -1,    58,    59,    60,    61,    -1,
      63,    64,    65,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      32,    33,    -1,    -1,    -1,    37,    -1,    39,    40,    41,
      -1,    -1,    85,    45,    46,    47,    48,    49,    -1,    51,
      52,    -1,    54,    55,    18,    57,    58,    59,    60,    61,
      -1,    63,    64,    65,    -1,    29,    -1,    -1,    32,    33,
      -1,    -1,    -1,    37,    -1,    39,    40,    41,    -1,    81,
      -1,    45,    46,    47,    48,    49,    -1,    51,    52,    -1,
      54,    55,    -1,    57,    58,    59,    60,    61,    -1,    63,
      64,    65,    29,    -1,    -1,    32,    33,    -1,    -1,    -1,
      37,    -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    -1,    51,    52,    -1,    54,    55,    -1,
      57,    58,    59,    60,    61,    -1,    63,    64,    65,    32,
      33,    -1,    -1,    -1,    37,    -1,    39,    -1,    41,    -1,
      -1,    -1,    -1,    46,    47,    -1,    49,    -1,    51,    52,
      -1,    -1,    55,    -1,    -1,    58,    59,    60,    61,    -1,
      63,    64,    65
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,    32,    33,    37,    39,    40,    41,    45,    46,
      47,    48,    49,    51,    52,    54,    55,    57,    58,    59,
      60,    61,    63,    64,    65,    91,    92,    93,   122,   123,
     126,   127,   128,   130,   136,   139,   140,     3,    84,     0,
      92,     3,    69,    80,    88,   124,   125,   141,   142,   143,
     123,   123,     3,    84,   123,   123,    84,     3,   137,   138,
     139,   143,   144,   141,    87,    88,    72,    94,    80,    82,
     142,   129,   127,   131,   132,   133,   139,   137,    72,    87,
     139,   143,    81,   125,   141,     3,     4,     5,     6,     8,
       9,    53,    66,    68,    69,    70,    71,    73,    80,    84,
     102,   103,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   152,    84,    96,
       3,    81,   123,   145,   146,   147,   148,    54,    69,    83,
     119,   144,    84,   133,    85,   132,    89,   134,   135,   141,
     133,    85,    87,   105,   118,    85,   138,    53,   105,   105,
      80,   119,   121,    75,    82,   152,   153,   154,   155,   156,
       7,     8,     9,    75,    80,    82,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    72,   120,   107,    69,
      78,    86,    70,    71,    10,    11,    12,    13,    76,    77,
      14,    15,    74,    67,    68,    17,    79,    16,    97,    95,
      80,    82,   141,   143,   150,   151,    81,    87,    81,    87,
     119,   144,    83,    83,    54,    69,    83,   119,   131,   118,
      87,    88,    89,    80,   121,   133,   149,    81,    87,     3,
     118,    85,    87,   152,    72,   156,     3,     3,    81,   104,
     119,   121,   119,   107,   107,   107,   108,   108,   109,   109,
     110,   110,   110,   110,   111,   111,   114,   115,   112,   117,
     121,   113,    96,    99,   100,   101,   121,   122,   123,   145,
     150,    69,   119,   151,    80,    82,    18,   147,     3,    83,
     119,   119,    83,    83,    85,   135,   118,    81,    80,   143,
     150,    81,   119,    83,    85,   152,   154,    81,    87,    83,
      89,    98,   100,    88,    81,    81,    83,    83,    81,   145,
      69,    83,   119,    83,    83,   152,   119,   118,    85,    81,
      83,    83
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    92,    92,    94,    95,    93,    97,
      98,    96,    99,    99,   100,   100,   101,   101,   102,   102,
     102,   102,   102,   103,   103,   103,   103,   103,   103,   103,
     103,   104,   104,   105,   105,   105,   105,   105,   106,   106,
     106,   106,   106,   106,   107,   107,   108,   108,   108,   108,
     109,   109,   109,   110,   110,   110,   111,   111,   111,   111,
     111,   112,   112,   112,   113,   113,   114,   114,   115,   115,
     116,   116,   117,   117,   118,   118,   119,   119,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   121,
     121,   122,   122,   123,   123,   123,   123,   123,   123,   123,
     123,   124,   124,   125,   125,   126,   126,   126,   126,   126,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   129,   128,   128,   128,   130,   130,
     131,   131,   132,   133,   133,   133,   133,   134,   134,   135,
     135,   135,   136,   136,   136,   137,   137,   138,   138,   139,
     139,   139,   140,   141,   141,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   143,
     143,   143,   143,   144,   144,   145,   145,   146,   146,   147,
     147,   147,   148,   148,   149,   149,   150,   150,   150,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   152,   152,
     152,   153,   153,   153,   153,   154,   155,   155,   156,   156
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     0,     0,     5,     0,
       0,     5,     1,     2,     1,     1,     1,     2,     1,     1,
       1,     1,     3,     1,     4,     3,     3,     4,     3,     2,
       2,     1,     3,     1,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     2,     2,     1,     2,     1,     2,     1,     2,
       1,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     6,     4,     2,     1,     1,
       1,     2,     3,     2,     1,     2,     1,     1,     3,     1,
       3,     2,     5,     5,     2,     1,     3,     1,     3,     1,
       1,     1,     1,     2,     1,     1,     3,     5,     4,     4,
       6,     5,     6,     5,     4,     3,     4,     4,     3,     1,
       2,     3,     2,     1,     2,     1,     3,     1,     3,     2,
       2,     1,     1,     3,     1,     2,     1,     2,     1,     3,
       4,     3,     3,     4,     3,     4,     3,     3,     1,     3,
       4,     2,     1,     4,     3,     2,     1,     2,     3,     2
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
  case 6: /* $@1: %empty  */
#line 85 "parser.y"
                                                       {   }
#line 1922 "parser.tab.c"
    break;

  case 7: /* $@2: %empty  */
#line 86 "parser.y"
                                                                           { printf("funct off"); }
#line 1928 "parser.tab.c"
    break;

  case 8: /* function_definition: declaration-specifiers declarator $@1 compound_statement $@2  */
#line 86 "parser.y"
                                                                                                    { }
#line 1934 "parser.tab.c"
    break;

  case 9: /* $@3: %empty  */
#line 90 "parser.y"
                        { current_scope = symbtab_push(SCOPE_FUNCTION, current_scope, lineno, filename_buf); }
#line 1940 "parser.tab.c"
    break;

  case 10: /* $@4: %empty  */
#line 90 "parser.y"
                                                                                                                                 {  current_scope = symbtab_pop(current_scope); }
#line 1946 "parser.tab.c"
    break;

  case 11: /* compound_statement: '{' $@3 decl_or_stmt_list $@4 '}'  */
#line 90 "parser.y"
                                                                                                                                                                                     {  }
#line 1952 "parser.tab.c"
    break;

  case 12: /* decl_or_stmt_list: decl_or_stmt  */
#line 94 "parser.y"
                                { }
#line 1958 "parser.tab.c"
    break;

  case 13: /* decl_or_stmt_list: decl_or_stmt_list decl_or_stmt  */
#line 95 "parser.y"
                                          { }
#line 1964 "parser.tab.c"
    break;

  case 17: /* stmt: expression ';'  */
#line 102 "parser.y"
                     {  }
#line 1970 "parser.tab.c"
    break;

  case 18: /* primary-expression: IDENT  */
#line 106 "parser.y"
                                            { (yyval.astnode_p) = newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal));}
#line 1976 "parser.tab.c"
    break;

  case 19: /* primary-expression: NUMBER  */
#line 107 "parser.y"
                                            { (yyval.astnode_p) = newNum(AST_NODE_TYPE_NUM, (yyvsp[0].num));}
#line 1982 "parser.tab.c"
    break;

  case 20: /* primary-expression: STRING  */
#line 108 "parser.y"
                                            { (yyval.astnode_p) = newIdent(AST_NODE_TYPE_STRING, (yyvsp[0].string_literal)); /*
                this needs to be changed to some string type after lexer is fixed with this (see hak email) */
                 }
#line 1990 "parser.tab.c"
    break;

  case 21: /* primary-expression: CHARLIT  */
#line 111 "parser.y"
                                            { (yyval.astnode_p) = newCharlit(AST_NODE_TYPE_CHARLIT, (yyvsp[0].charlit));  }
#line 1996 "parser.tab.c"
    break;

  case 22: /* primary-expression: '(' expression ')'  */
#line 112 "parser.y"
                                            { (yyval.astnode_p) = (yyvsp[-1].astnode_p);  }
#line 2002 "parser.tab.c"
    break;

  case 23: /* postfix-expression: primary-expression  */
#line 115 "parser.y"
                                       { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2008 "parser.tab.c"
    break;

  case 24: /* postfix-expression: postfix-expression '[' expression ']'  */
#line 116 "parser.y"
                                                          { struct astnode *ast = newast(AST_NODE_TYPE_BINOP, (yyvsp[-3].astnode_p), (yyvsp[-1].astnode_p), '+'); (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, ast, NULL, '*'); }
#line 2014 "parser.tab.c"
    break;

  case 25: /* postfix-expression: postfix-expression '.' IDENT  */
#line 117 "parser.y"
                                                 { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal)), '.'); }
#line 2020 "parser.tab.c"
    break;

  case 26: /* postfix-expression: postfix-expression INDSEL IDENT  */
#line 118 "parser.y"
                                                    { struct astnode *ast = newast(AST_NODE_TYPE_UNOP, (yyvsp[-2].astnode_p), NULL, '*'); (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, ast, newIdent(AST_NODE_TYPE_IDENT, (yyvsp[0].string_literal)), '.' ); }
#line 2026 "parser.tab.c"
    break;

  case 27: /* postfix-expression: postfix-expression '(' expression-list ')'  */
#line 119 "parser.y"
                                                               { (yyval.astnode_p) = newast(AST_NODE_TYPE_FN, (yyvsp[-3].astnode_p), (yyvsp[-1].astnode_p), '0'); }
#line 2032 "parser.tab.c"
    break;

  case 28: /* postfix-expression: postfix-expression '(' ')'  */
#line 120 "parser.y"
                                               { (yyval.astnode_p) = newast(AST_NODE_TYPE_FN, (yyvsp[-2].astnode_p), NULL, '0');  }
#line 2038 "parser.tab.c"
    break;

  case 29: /* postfix-expression: postfix-expression PLUSPLUS  */
#line 121 "parser.y"
                                                { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, POSTINC); }
#line 2044 "parser.tab.c"
    break;

  case 30: /* postfix-expression: postfix-expression MINUSMINUS  */
#line 122 "parser.y"
                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, POSTDEC); }
#line 2050 "parser.tab.c"
    break;

  case 31: /* expression-list: assignment-expression  */
#line 125 "parser.y"
                                        { (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p)); }
#line 2056 "parser.tab.c"
    break;

  case 32: /* expression-list: expression-list ',' assignment-expression  */
#line 126 "parser.y"
                                                            { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p));  }
#line 2062 "parser.tab.c"
    break;

  case 33: /* unary-expression: postfix-expression  */
#line 130 "parser.y"
                                     {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2068 "parser.tab.c"
    break;

  case 34: /* unary-expression: PLUSPLUS unary-expression  */
#line 131 "parser.y"
                                              { struct Num num; num.type = INT_SIGNED; num.integer = 1; (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[0].astnode_p), newNum(AST_NODE_TYPE_NUM, num), PLUSEQ );  }
#line 2074 "parser.tab.c"
    break;

  case 35: /* unary-expression: MINUSMINUS unary-expression  */
#line 132 "parser.y"
                                              {struct Num num; num.type = INT_SIGNED; num.integer = 1; (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[0].astnode_p), newNum(AST_NODE_TYPE_NUM, num), MINUSEQ); }
#line 2080 "parser.tab.c"
    break;

  case 36: /* unary-expression: unary-operator cast-expression  */
#line 133 "parser.y"
                                                 { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[0].astnode_p), NULL, (yyvsp[-1].op)); }
#line 2086 "parser.tab.c"
    break;

  case 37: /* unary-expression: SIZEOF '(' expression ')'  */
#line 134 "parser.y"
                                            { (yyval.astnode_p) = newast(AST_NODE_TYPE_UNOP, (yyvsp[-1].astnode_p), NULL, SIZEOF);  }
#line 2092 "parser.tab.c"
    break;

  case 38: /* unary-operator: '-'  */
#line 137 "parser.y"
                    { (yyval.op) = '-'; }
#line 2098 "parser.tab.c"
    break;

  case 39: /* unary-operator: '+'  */
#line 138 "parser.y"
                      { (yyval.op) = '+';  }
#line 2104 "parser.tab.c"
    break;

  case 40: /* unary-operator: '!'  */
#line 139 "parser.y"
                      {(yyval.op) = '!'; }
#line 2110 "parser.tab.c"
    break;

  case 41: /* unary-operator: '~'  */
#line 140 "parser.y"
                      {(yyval.op) = '~'; }
#line 2116 "parser.tab.c"
    break;

  case 42: /* unary-operator: '&'  */
#line 141 "parser.y"
                      {(yyval.op) = '&'; }
#line 2122 "parser.tab.c"
    break;

  case 43: /* unary-operator: '*'  */
#line 142 "parser.y"
                      {(yyval.op) = '*'; }
#line 2128 "parser.tab.c"
    break;

  case 44: /* cast-expression: unary-expression  */
#line 144 "parser.y"
                                  {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2134 "parser.tab.c"
    break;

  case 45: /* cast-expression: SIZEOF '(' type-name ')'  */
#line 145 "parser.y"
                                          { }
#line 2140 "parser.tab.c"
    break;

  case 46: /* mult-expression: cast-expression  */
#line 149 "parser.y"
                                 { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2146 "parser.tab.c"
    break;

  case 47: /* mult-expression: mult-expression '*' cast-expression  */
#line 150 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '*'); }
#line 2152 "parser.tab.c"
    break;

  case 48: /* mult-expression: mult-expression '/' cast-expression  */
#line 151 "parser.y"
                                                      {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '/'); }
#line 2158 "parser.tab.c"
    break;

  case 49: /* mult-expression: mult-expression '%' cast-expression  */
#line 152 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '%'); }
#line 2164 "parser.tab.c"
    break;

  case 50: /* add-expression: mult-expression  */
#line 155 "parser.y"
                                { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2170 "parser.tab.c"
    break;

  case 51: /* add-expression: add-expression '+' mult-expression  */
#line 156 "parser.y"
                                                     { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '+'); }
#line 2176 "parser.tab.c"
    break;

  case 52: /* add-expression: add-expression '-' mult-expression  */
#line 157 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '-'); }
#line 2182 "parser.tab.c"
    break;

  case 53: /* shift-expression: add-expression  */
#line 160 "parser.y"
                                 { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2188 "parser.tab.c"
    break;

  case 54: /* shift-expression: shift-expression SHL add-expression  */
#line 161 "parser.y"
                                                      {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), SHL); }
#line 2194 "parser.tab.c"
    break;

  case 55: /* shift-expression: shift-expression SHR add-expression  */
#line 162 "parser.y"
                                                      { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), SHR); }
#line 2200 "parser.tab.c"
    break;

  case 56: /* relational-expression: shift-expression  */
#line 165 "parser.y"
                                        {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2206 "parser.tab.c"
    break;

  case 57: /* relational-expression: relational-expression '<' shift-expression  */
#line 166 "parser.y"
                                                             {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '<');}
#line 2212 "parser.tab.c"
    break;

  case 58: /* relational-expression: relational-expression LTEQ shift-expression  */
#line 167 "parser.y"
                                                              {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LTEQ);}
#line 2218 "parser.tab.c"
    break;

  case 59: /* relational-expression: relational-expression '>' shift-expression  */
#line 168 "parser.y"
                                                             {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '>');}
#line 2224 "parser.tab.c"
    break;

  case 60: /* relational-expression: relational-expression GTEQ shift-expression  */
#line 169 "parser.y"
                                                              {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), GTEQ);}
#line 2230 "parser.tab.c"
    break;

  case 61: /* equality-expression: relational-expression  */
#line 172 "parser.y"
                                           {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2236 "parser.tab.c"
    break;

  case 62: /* equality-expression: equality-expression EQEQ relational-expression  */
#line 173 "parser.y"
                                                                 {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), EQEQ);}
#line 2242 "parser.tab.c"
    break;

  case 63: /* equality-expression: equality-expression NOTEQ relational-expression  */
#line 174 "parser.y"
                                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), NOTEQ); }
#line 2248 "parser.tab.c"
    break;

  case 64: /* bitwise-or-expression: bitwise-xor-expression  */
#line 177 "parser.y"
                                              {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2254 "parser.tab.c"
    break;

  case 65: /* bitwise-or-expression: bitwise-or-expression '|' bitwise-xor-expression  */
#line 178 "parser.y"
                                                                   {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '|');}
#line 2260 "parser.tab.c"
    break;

  case 66: /* bitwise-xor-expression: bitwise-and-expression  */
#line 181 "parser.y"
                                               {(yyval.astnode_p) = (yyvsp[0].astnode_p);  }
#line 2266 "parser.tab.c"
    break;

  case 67: /* bitwise-xor-expression: bitwise-xor-expression '^' bitwise-and-expression  */
#line 182 "parser.y"
                                                                    {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '^');}
#line 2272 "parser.tab.c"
    break;

  case 68: /* bitwise-and-expression: equality-expression  */
#line 185 "parser.y"
                                            {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2278 "parser.tab.c"
    break;

  case 69: /* bitwise-and-expression: bitwise-and-expression '&' equality-expression  */
#line 186 "parser.y"
                                                                 {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), '&');}
#line 2284 "parser.tab.c"
    break;

  case 70: /* logical-or-expression: logical-and-expression  */
#line 189 "parser.y"
                                               {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2290 "parser.tab.c"
    break;

  case 71: /* logical-or-expression: logical-or-expression LOGOR logical-and-expression  */
#line 190 "parser.y"
                                                                            {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LOGOR);}
#line 2296 "parser.tab.c"
    break;

  case 72: /* logical-and-expression: bitwise-or-expression  */
#line 193 "parser.y"
                                              { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2302 "parser.tab.c"
    break;

  case 73: /* logical-and-expression: logical-and-expression LOGAND bitwise-or-expression  */
#line 194 "parser.y"
                                                                           {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), LOGAND);}
#line 2308 "parser.tab.c"
    break;

  case 74: /* conditional-expression: logical-or-expression  */
#line 197 "parser.y"
                                              {  (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2314 "parser.tab.c"
    break;

  case 75: /* conditional-expression: logical-or-expression '?' expression ':' conditional-expression  */
#line 198 "parser.y"
                                                                                          { (yyval.astnode_p) = newTenop(AST_NODE_TYPE_TENOP, (yyvsp[-4].astnode_p), (yyvsp[-2].astnode_p) , (yyvsp[0].astnode_p)); }
#line 2320 "parser.tab.c"
    break;

  case 76: /* assignment-expression: conditional-expression  */
#line 201 "parser.y"
                                              { (yyval.astnode_p) =  (yyvsp[0].astnode_p); }
#line 2326 "parser.tab.c"
    break;

  case 77: /* assignment-expression: unary-expression assignment-operator assignment-expression  */
#line 202 "parser.y"
                                                                                     {(yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), (yyvsp[-1].op)); }
#line 2332 "parser.tab.c"
    break;

  case 78: /* assignment-operator: '='  */
#line 206 "parser.y"
                         {(yyval.op) = '='; }
#line 2338 "parser.tab.c"
    break;

  case 79: /* assignment-operator: PLUSEQ  */
#line 207 "parser.y"
                             { (yyval.op) = PLUSEQ; }
#line 2344 "parser.tab.c"
    break;

  case 80: /* assignment-operator: MINUSEQ  */
#line 208 "parser.y"
                              {(yyval.op) = MINUSEQ; }
#line 2350 "parser.tab.c"
    break;

  case 81: /* assignment-operator: TIMESEQ  */
#line 209 "parser.y"
                              {(yyval.op) = TIMESEQ; }
#line 2356 "parser.tab.c"
    break;

  case 82: /* assignment-operator: DIVEQ  */
#line 210 "parser.y"
                            {(yyval.op) = DIVEQ; }
#line 2362 "parser.tab.c"
    break;

  case 83: /* assignment-operator: MODEQ  */
#line 211 "parser.y"
                            { (yyval.op) = MODEQ; }
#line 2368 "parser.tab.c"
    break;

  case 84: /* assignment-operator: SHLEQ  */
#line 212 "parser.y"
                            { (yyval.op) = SHLEQ; }
#line 2374 "parser.tab.c"
    break;

  case 85: /* assignment-operator: SHREQ  */
#line 213 "parser.y"
                            { (yyval.op) = SHREQ; }
#line 2380 "parser.tab.c"
    break;

  case 86: /* assignment-operator: ANDEQ  */
#line 214 "parser.y"
                            { (yyval.op) = ANDEQ; }
#line 2386 "parser.tab.c"
    break;

  case 87: /* assignment-operator: OREQ  */
#line 215 "parser.y"
                           {(yyval.op) = OREQ; }
#line 2392 "parser.tab.c"
    break;

  case 88: /* assignment-operator: XOREQ  */
#line 216 "parser.y"
                            { (yyval.op) = XOREQ; }
#line 2398 "parser.tab.c"
    break;

  case 89: /* expression: assignment-expression  */
#line 218 "parser.y"
                                          { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2404 "parser.tab.c"
    break;

  case 90: /* expression: expression ',' assignment-expression  */
#line 219 "parser.y"
                                                           { (yyval.astnode_p) = newast(AST_NODE_TYPE_BINOP, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p), ','); }
#line 2410 "parser.tab.c"
    break;

  case 91: /* declaration: declaration-specifiers init-declarator-list ';'  */
#line 225 "parser.y"
                                                             { if (!current_scope) {current_scope = symbtab_push(SCOPE_GLOBAL, current_scope, lineno, filename_buf);}
                                                          symbent_combine((yyvsp[-2].astnode_p), (yyvsp[-1].astnode_p), lineno, filename_buf, current_scope);  }
#line 2417 "parser.tab.c"
    break;

  case 92: /* declaration: declaration-specifiers ';'  */
#line 227 "parser.y"
                                  {  (yyval.astnode_p) = (yyvsp[-1].astnode_p); }
#line 2423 "parser.tab.c"
    break;

  case 93: /* declaration-specifiers: storage-class-specifier declaration-specifiers  */
#line 230 "parser.y"
                                                                       {   (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0);}
#line 2429 "parser.tab.c"
    break;

  case 94: /* declaration-specifiers: storage-class-specifier  */
#line 231 "parser.y"
                               { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2435 "parser.tab.c"
    break;

  case 95: /* declaration-specifiers: type-specifier declaration-specifiers  */
#line 232 "parser.y"
                                            { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0);   }
#line 2441 "parser.tab.c"
    break;

  case 96: /* declaration-specifiers: type-specifier  */
#line 233 "parser.y"
                     { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2447 "parser.tab.c"
    break;

  case 97: /* declaration-specifiers: type-qualifier declaration-specifiers  */
#line 234 "parser.y"
                                            { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0);  }
#line 2453 "parser.tab.c"
    break;

  case 98: /* declaration-specifiers: type-qualifier  */
#line 235 "parser.y"
                     { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2459 "parser.tab.c"
    break;

  case 99: /* declaration-specifiers: function-specifier declaration-specifiers  */
#line 236 "parser.y"
                                                { }
#line 2465 "parser.tab.c"
    break;

  case 100: /* declaration-specifiers: function-specifier  */
#line 237 "parser.y"
                         { /*$$ = newDecl(ASTNODE_NODE_TYPE_DECLSPEC, $1);  */ }
#line 2471 "parser.tab.c"
    break;

  case 101: /* init-declarator-list: init-declarator  */
#line 240 "parser.y"
                                      { (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p));  }
#line 2477 "parser.tab.c"
    break;

  case 102: /* init-declarator-list: init-declarator-list ',' init-declarator  */
#line 241 "parser.y"
                                               { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)); }
#line 2483 "parser.tab.c"
    break;

  case 103: /* init-declarator: declarator  */
#line 244 "parser.y"
                            { (yyval.astnode_p) = (yyvsp[0].astnode_p); astwalk_impl((yyvsp[0].astnode_p)->head, 0); }
#line 2489 "parser.tab.c"
    break;

  case 104: /* init-declarator: declarator '=' initializer  */
#line 245 "parser.y"
                                 {/* do not have to do yet */ }
#line 2495 "parser.tab.c"
    break;

  case 105: /* storage-class-specifier: TYPEDEF  */
#line 249 "parser.y"
                                 {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, TYPEDEF_S);}
#line 2501 "parser.tab.c"
    break;

  case 106: /* storage-class-specifier: EXTERN  */
#line 250 "parser.y"
                                {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, EXTERN_S);}
#line 2507 "parser.tab.c"
    break;

  case 107: /* storage-class-specifier: STATIC  */
#line 251 "parser.y"
                                 {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, STATIC_S);}
#line 2513 "parser.tab.c"
    break;

  case 108: /* storage-class-specifier: AUTO  */
#line 252 "parser.y"
                              {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, AUTO_S);}
#line 2519 "parser.tab.c"
    break;

  case 109: /* storage-class-specifier: REGISTER  */
#line 253 "parser.y"
                                  {(yyval.astnode_p) = newType(AST_NODE_TYPE_STORAGE, REGISTER_S);}
#line 2525 "parser.tab.c"
    break;

  case 110: /* type-specifier: VOID  */
#line 258 "parser.y"
                     {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,VOID); }
#line 2531 "parser.tab.c"
    break;

  case 111: /* type-specifier: CHAR  */
#line 259 "parser.y"
                     { (yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,CHAR);}
#line 2537 "parser.tab.c"
    break;

  case 112: /* type-specifier: SHORT  */
#line 260 "parser.y"
                      {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,SHORT);}
#line 2543 "parser.tab.c"
    break;

  case 113: /* type-specifier: INT  */
#line 261 "parser.y"
                      {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,INT); }
#line 2549 "parser.tab.c"
    break;

  case 114: /* type-specifier: LONG  */
#line 262 "parser.y"
                         {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,LONG);}
#line 2555 "parser.tab.c"
    break;

  case 115: /* type-specifier: FLOAT  */
#line 263 "parser.y"
                       {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,FLOAT);}
#line 2561 "parser.tab.c"
    break;

  case 116: /* type-specifier: DOUBLE  */
#line 264 "parser.y"
                         {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,DOUBLE);}
#line 2567 "parser.tab.c"
    break;

  case 117: /* type-specifier: SIGNED  */
#line 265 "parser.y"
                         {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,SIGNED);}
#line 2573 "parser.tab.c"
    break;

  case 118: /* type-specifier: UNSIGNED  */
#line 266 "parser.y"
                             {(yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR,UNSIGNED);}
#line 2579 "parser.tab.c"
    break;

  case 119: /* type-specifier: _BOOL  */
#line 267 "parser.y"
                         { (yyval.astnode_p) = newType(AST_NODE_TYPE_SCALAR, _BOOL); }
#line 2585 "parser.tab.c"
    break;

  case 120: /* type-specifier: _COMPLEX  */
#line 268 "parser.y"
                            { }
#line 2591 "parser.tab.c"
    break;

  case 121: /* type-specifier: _IMAGINARY  */
#line 269 "parser.y"
                           { }
#line 2597 "parser.tab.c"
    break;

  case 122: /* type-specifier: struct-or-union-specifier  */
#line 270 "parser.y"
                                        { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2603 "parser.tab.c"
    break;

  case 124: /* $@5: %empty  */
#line 277 "parser.y"
                                                 { printf("insert struct in upper symbol table"); }
#line 2609 "parser.tab.c"
    break;

  case 125: /* struct-or-union-specifier: struct-or-union IDENT $@5 '{' struct-declaration-list '}'  */
#line 277 "parser.y"
                                                                                                                                   { (yyval.astnode_p) = newStructUnion((yyvsp[-5].op), (yyvsp[-4].string_literal), NULL); }
#line 2615 "parser.tab.c"
    break;

  case 126: /* struct-or-union-specifier: struct-or-union '{' struct-declaration-list '}'  */
#line 278 "parser.y"
                                                                           { (yyval.astnode_p) = newStructUnion((yyvsp[-3].op), NULL, NULL); }
#line 2621 "parser.tab.c"
    break;

  case 127: /* struct-or-union-specifier: struct-or-union IDENT  */
#line 279 "parser.y"
                                                 {  (yyval.astnode_p) = newStructUnion((yyvsp[-1].op), (yyvsp[0].string_literal), NULL);   }
#line 2627 "parser.tab.c"
    break;

  case 128: /* struct-or-union: STRUCT  */
#line 282 "parser.y"
                        { (yyval.op) = STRUCT; }
#line 2633 "parser.tab.c"
    break;

  case 129: /* struct-or-union: UNION  */
#line 283 "parser.y"
                        { (yyval.op) =  UNION; }
#line 2639 "parser.tab.c"
    break;

  case 130: /* struct-declaration-list: struct-declaration  */
#line 286 "parser.y"
                                            {  
    /* install members in struct scope here */
}
#line 2647 "parser.tab.c"
    break;

  case 132: /* struct-declaration: specifier-qualifier-list struct-declarator-list ';'  */
#line 292 "parser.y"
                                                                        { }
#line 2653 "parser.tab.c"
    break;

  case 133: /* specifier-qualifier-list: type-specifier specifier-qualifier-list  */
#line 295 "parser.y"
                                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0); }
#line 2659 "parser.tab.c"
    break;

  case 134: /* specifier-qualifier-list: type-specifier  */
#line 296 "parser.y"
                                         { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p)); }
#line 2665 "parser.tab.c"
    break;

  case 135: /* specifier-qualifier-list: type-qualifier specifier-qualifier-list  */
#line 297 "parser.y"
                                                                  { (yyval.astnode_p) = newast(AST_NODE_TYPE_DECLSPEC, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0); }
#line 2671 "parser.tab.c"
    break;

  case 136: /* specifier-qualifier-list: type-qualifier  */
#line 298 "parser.y"
                                         { (yyval.astnode_p) = newDecl(AST_NODE_TYPE_DECLSPEC, (yyvsp[0].astnode_p));  }
#line 2677 "parser.tab.c"
    break;

  case 137: /* struct-declarator-list: struct-declarator  */
#line 300 "parser.y"
                                          {  (yyval.astnode_p) =  insertElementorig(AST_NODE_TYPE_LL, (yyvsp[0].astnode_p)->head); }
#line 2683 "parser.tab.c"
    break;

  case 138: /* struct-declarator-list: struct-declarator-list ',' struct-declarator  */
#line 301 "parser.y"
                                                                      { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_LL, (yyvsp[-2].astnode_p), (yyvsp[0].astnode_p)->head); }
#line 2689 "parser.tab.c"
    break;

  case 139: /* struct-declarator: declarator  */
#line 303 "parser.y"
                              { (yyval.astnode_p) = (yyvsp[0].astnode_p);  }
#line 2695 "parser.tab.c"
    break;

  case 140: /* struct-declarator: declarator ':' conditional-expression  */
#line 304 "parser.y"
                                                         { 
                    /* not supporting bitfield */ 
                  }
#line 2703 "parser.tab.c"
    break;

  case 141: /* struct-declarator: ':' conditional-expression  */
#line 307 "parser.y"
                                             { 
                /* not supporting implicit bit field */
                 }
#line 2711 "parser.tab.c"
    break;

  case 149: /* type-qualifier: CONST  */
#line 328 "parser.y"
                       {    (yyval.astnode_p) = newType(AST_NODE_TYPE_QUALIFIER, CONST); }
#line 2717 "parser.tab.c"
    break;

  case 150: /* type-qualifier: RESTRICT  */
#line 329 "parser.y"
                          {  (yyval.astnode_p) = newType(AST_NODE_TYPE_QUALIFIER, RESTRICT);}
#line 2723 "parser.tab.c"
    break;

  case 151: /* type-qualifier: VOLATILE  */
#line 330 "parser.y"
                          {   (yyval.astnode_p) = newType(AST_NODE_TYPE_QUALIFIER, VOLATILE);}
#line 2729 "parser.tab.c"
    break;

  case 153: /* declarator: pointer direct-declarator  */
#line 337 "parser.y"
                                          { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_DECL, (yyvsp[0].astnode_p),  (yyvsp[-1].astnode_p));   }
#line 2735 "parser.tab.c"
    break;

  case 154: /* declarator: direct-declarator  */
#line 338 "parser.y"
                                { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2741 "parser.tab.c"
    break;

  case 155: /* direct-declarator: IDENT  */
#line 341 "parser.y"
                             { (yyval.astnode_p) = newDeclar(AST_NODE_TYPE_DECL, (yyvsp[0].string_literal));  }
#line 2747 "parser.tab.c"
    break;

  case 156: /* direct-declarator: '(' declarator ')'  */
#line 342 "parser.y"
                             { (yyval.astnode_p) = (yyvsp[-1].astnode_p);  }
#line 2753 "parser.tab.c"
    break;

  case 157: /* direct-declarator: direct-declarator '[' type-qualifier-list assignment-expression ']'  */
#line 343 "parser.y"
                                                                                { }
#line 2759 "parser.tab.c"
    break;

  case 158: /* direct-declarator: direct-declarator '[' assignment-expression ']'  */
#line 344 "parser.y"
                                                           { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-3].astnode_p),  newArrayDecl((yyvsp[-1].astnode_p))); /* add array size */ }
#line 2765 "parser.tab.c"
    break;

  case 159: /* direct-declarator: direct-declarator '[' type-qualifier-list ']'  */
#line 345 "parser.y"
                                                         {}
#line 2771 "parser.tab.c"
    break;

  case 160: /* direct-declarator: direct-declarator '[' STATIC type-qualifier-list assignment-expression ']'  */
#line 346 "parser.y"
                                                                                     {}
#line 2777 "parser.tab.c"
    break;

  case 161: /* direct-declarator: direct-declarator '[' STATIC assignment-expression ']'  */
#line 347 "parser.y"
                                                                  {}
#line 2783 "parser.tab.c"
    break;

  case 162: /* direct-declarator: direct-declarator '[' type-qualifier-list STATIC assignment-expression ']'  */
#line 348 "parser.y"
                                                                                     {}
#line 2789 "parser.tab.c"
    break;

  case 163: /* direct-declarator: direct-declarator '[' type-qualifier-list '*' ']'  */
#line 349 "parser.y"
                                                             { }
#line 2795 "parser.tab.c"
    break;

  case 164: /* direct-declarator: direct-declarator '[' '*' ']'  */
#line 350 "parser.y"
                                          { /*  */ }
#line 2801 "parser.tab.c"
    break;

  case 165: /* direct-declarator: direct-declarator '[' ']'  */
#line 351 "parser.y"
                                    {(yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-2].astnode_p),  newArrayDecl(NULL));}
#line 2807 "parser.tab.c"
    break;

  case 166: /* direct-declarator: direct-declarator '(' parameter-type-list ')'  */
#line 352 "parser.y"
                                                        {  (yyval.astnode_p) = insertElement(AST_NODE_TYPE_FNDCL, (yyvsp[-3].astnode_p),  newFunctDecl(NULL)); }
#line 2813 "parser.tab.c"
    break;

  case 167: /* direct-declarator: direct-declarator '(' identifier-list ')'  */
#line 353 "parser.y"
                                                    { }
#line 2819 "parser.tab.c"
    break;

  case 168: /* direct-declarator: direct-declarator '(' ')'  */
#line 354 "parser.y"
                                    { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_FNDCL, (yyvsp[-2].astnode_p),  newFunctDecl(NULL)); }
#line 2825 "parser.tab.c"
    break;

  case 169: /* pointer: '*'  */
#line 357 "parser.y"
                 {  (yyval.astnode_p) =  newType(AST_NODE_TYPE_POINTER,  0);  }
#line 2831 "parser.tab.c"
    break;

  case 170: /* pointer: '*' type-qualifier-list  */
#line 358 "parser.y"
                                  {  /*<-thing on right receives this */ }
#line 2837 "parser.tab.c"
    break;

  case 171: /* pointer: '*' type-qualifier-list pointer  */
#line 359 "parser.y"
                                          {}
#line 2843 "parser.tab.c"
    break;

  case 172: /* pointer: '*' pointer  */
#line 360 "parser.y"
                      { struct astnode *temp = newType(AST_NODE_TYPE_POINTER,  0);  temp->ptr.next = (yyvsp[0].astnode_p); (yyval.astnode_p) = temp; }
#line 2849 "parser.tab.c"
    break;

  case 173: /* type-qualifier-list: type-qualifier  */
#line 363 "parser.y"
                                        {(yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2855 "parser.tab.c"
    break;

  case 174: /* type-qualifier-list: type-qualifier-list type-qualifier  */
#line 364 "parser.y"
                                             { (yyval.astnode_p) = newast(AST_NODE_TYPE_QUALIFIER, (yyvsp[-1].astnode_p), (yyvsp[0].astnode_p), 0); }
#line 2861 "parser.tab.c"
    break;

  case 179: /* parameter-declaration: declaration-specifiers declarator  */
#line 375 "parser.y"
                                                             {}
#line 2867 "parser.tab.c"
    break;

  case 180: /* parameter-declaration: declaration-specifiers abstract-declarator  */
#line 376 "parser.y"
                                                     {   }
#line 2873 "parser.tab.c"
    break;

  case 181: /* parameter-declaration: declaration-specifiers  */
#line 377 "parser.y"
                                 { }
#line 2879 "parser.tab.c"
    break;

  case 186: /* abstract-declarator: pointer  */
#line 389 "parser.y"
                                 { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_DECL, newDeclar(AST_NODE_TYPE_DECL, NULL), (yyvsp[0].astnode_p));  }
#line 2885 "parser.tab.c"
    break;

  case 187: /* abstract-declarator: pointer direct-abstract-declarator  */
#line 390 "parser.y"
                                             {   (yyval.astnode_p) = insertElement(AST_NODE_TYPE_DECL, (yyvsp[0].astnode_p), (yyvsp[-1].astnode_p)); }
#line 2891 "parser.tab.c"
    break;

  case 188: /* abstract-declarator: direct-abstract-declarator  */
#line 391 "parser.y"
                                     { (yyval.astnode_p) = (yyvsp[0].astnode_p); }
#line 2897 "parser.tab.c"
    break;

  case 189: /* direct-abstract-declarator: '(' abstract-declarator ')'  */
#line 394 "parser.y"
                                                            { (yyval.astnode_p) =  (yyvsp[-1].astnode_p); }
#line 2903 "parser.tab.c"
    break;

  case 190: /* direct-abstract-declarator: direct-abstract-declarator '[' assignment-expression ']'  */
#line 395 "parser.y"
                                                                   { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-3].astnode_p),  newArrayDecl((yyvsp[-1].astnode_p)));}
#line 2909 "parser.tab.c"
    break;

  case 191: /* direct-abstract-declarator: direct-abstract-declarator '[' ']'  */
#line 396 "parser.y"
                                             {(yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, (yyvsp[-2].astnode_p),  newArrayDecl(NULL));}
#line 2915 "parser.tab.c"
    break;

  case 192: /* direct-abstract-declarator: '[' assignment-expression ']'  */
#line 397 "parser.y"
                                        { (yyval.astnode_p) = insertElement(AST_NODE_TYPE_ARRAYDCL, newDeclar(AST_NODE_TYPE_DECL, NULL), newArrayDecl((yyvsp[-1].astnode_p)));  }
#line 2921 "parser.tab.c"
    break;

  case 193: /* direct-abstract-declarator: direct-abstract-declarator '[' '*' ']'  */
#line 398 "parser.y"
                                                 {   }
#line 2927 "parser.tab.c"
    break;

  case 194: /* direct-abstract-declarator: '[' '*' ']'  */
#line 399 "parser.y"
                      {  }
#line 2933 "parser.tab.c"
    break;

  case 195: /* direct-abstract-declarator: direct-abstract-declarator '(' parameter-type-list ')'  */
#line 400 "parser.y"
                                                                 { }
#line 2939 "parser.tab.c"
    break;

  case 196: /* direct-abstract-declarator: '(' parameter-type-list ')'  */
#line 401 "parser.y"
                                      { }
#line 2945 "parser.tab.c"
    break;

  case 197: /* direct-abstract-declarator: direct-abstract-declarator '(' ')'  */
#line 402 "parser.y"
                                             { }
#line 2951 "parser.tab.c"
    break;


#line 2955 "parser.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 432 "parser.y"
       
    int main() {
        yydebug = 0;

  
 yyparse();
  
        
        return 1;
        
    }
