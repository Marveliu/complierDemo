%token NAME NUMBER

%%
statement: NAME '=' expression
        | expression  {printf("= %d\n",$1);}
        ;

expression: NUMBER '+' NUMBER {$$ = $1 + $2;}
        | NUMBER '-' NUMBER {$$ = $1 - $2;}
        | NUMBER {$$ = $1}    
        ;


