%{
#include "y.tab.h"
%}

%%
[0-9]+      { yylval = atoi(yytext); return NUM; }
[-+\n*/]    { return yytext[0]; }
[ \t]       { /* Ignore whitespace */ }
.           { /* Ignore other characters */ }
%%

int yywrap() {
    return 1;
}

