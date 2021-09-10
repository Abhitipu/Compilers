%{
    #define KEYWORD 258
    #define IDENTIFIER 259
    #define STRING_LITERAL 261
    #define PUNCTUATOR 262
    #define INT_CONST 263
    #define FLOAT_CONST 264
    #define ENUM_CONST 265
    #define CHAR_CONST 266
    #define SINGLE_LINE_COMMENT 267
    #define MULTI_LINE_COMMENT 268
    #define WS 269
    #define START_SINGLE_LINE_COMMENT 270
    #define END_SINGLE_LINE_COMMENT 271
    #define START_MULTI_LINE_COMMENT 270
    #define END_MULTI_LINE COMMENT 271
%}

%x MULTI_COMMENT_STATE
%x SINGLE_COMMENT_STATE
KEYWORD                     "auto"|"break"|case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"|"enum"|"extern"|"float"|"for"|"goto"|"if"|"inline"|"int"|"long"|"register"|"restrict"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"void"|"volatile"|"while"|"_Bool"|"_Complex"|"_Imaginary"
NON_DIGIT_ID                [a-xA-Z]
DIGIT_ID                    [0-9]

%%

{KEYWORD}                   {return KEYWORD;}
{IDENTIFIER}                {return IDENTIFIER}
{STRING_LITERAL}            {return STRING_LITERAL;}
{PUNCTUATOR}                {return PUNCTUATOR;}
{INT_CONST}                 {return INT_CONST;}
{FLOAT_CONST}               {return FLOAT_CONST;}
{CHAR_CONST}                {return CHAR_CONST;}
{ESC_SEQUENCE}|" "          {}

"/*"                        {BEGIN(MULTI_COMMENT_STATE); return START_MULTI_LINE_COMMENT;}
<MULTI_COMMENT_STATE>"*/"   {BEGIN(INITIAL); return END_MULTI_LINE_COMMENT;}
<MULTI_COMMENT_STATE>"\n"   {return MULTI_LINE_COMMENT;}
<MULTI_COMMENT_STATE>.      {return MULTI_LINE_COMMENT;}


"/*"                        {BEGIN(SINGLE_COMMENT_STATE); return START_SINGLE_LINE_COMMENT;}
<SINGLE_COMMENT_STATE>"*/"   {BEGIN(INITIAL); return END_SINGLE_LINE_COMMENT;}
<SINGLE_COMMENT_STATE>"\n"   {return SINGLE_LINE_COMMENT;}
<SINGLE_COMMENT_STATE>.      {return SINGLE_LINE_COMMENT;}

%%
