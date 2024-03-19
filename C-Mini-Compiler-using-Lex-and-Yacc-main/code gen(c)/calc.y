%{
#include <stdio.h>
#include <stdlib.h>

extern FILE* yyin;  // Declare yyin as an external file pointer
%}

%token NUM
%left '+' '-'
%left '*' '/'

%%
input: /* empty */
     | input line
     ;

line: expr '\n' { printf("%d\n", $1); }
    | '\n'      { /* Do nothing for empty lines */ }
    ;

expr: NUM { $$ = $1; }
    | expr '+' expr { $$ = $1 + $3; }
    | expr '-' expr { $$ = $1 - $3; }
    | expr '*' expr { $$ = $1 * $3; }
    | expr '/' expr { $$ = $1 / $3; }
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "%s\n", s);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    FILE* inputFile = fopen(argv[1], "r");
    if (!inputFile) {
        fprintf(stderr, "Error opening file: %s\n", argv[1]);
        return 1;
    }

    yyin = inputFile;  // Set yyin to point to the input file

    yyparse();  // Start parsing

    fclose(inputFile);  // Close the input file

    return 0;
}

