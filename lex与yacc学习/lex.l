%{
    #include "yacc.tab.h"
    extern int yylval;
%}

%%
[0-9]*  {yylval = atoi{yytext}; return NUMBER; }
[ \t] ;  /*忽略空白*/
\n  return 0;
.   return yytext[0]
%%