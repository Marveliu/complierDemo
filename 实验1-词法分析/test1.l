/*定义模式宏*/
digit			[0-9]
letter		[_A-Za-z]
PreprocessStatment		^#.*
word			{letter}({letter}|{digit})*
constant	({digit}*\.?{digit}*|\".*\"|\'(.|\\.)\')
operator	([~!%^&*\-+=<>/()]|"<="|">="|"=="|"!="|"++"|"--"|"<<"|">>"|"<<="|">>="|"+="|"-="|"*="|"/="|"%="|"&="|"|="|"^="|"&&"|"||"|sizeof)
token		[\{\}\[\]\;\,]
comment	"//".*

/*定义状态*/
%x BLOCKCOMMENT

/*C语言源码*/
%{
#include <windows.h>
#include <wincon.h>
#include <stdlib.h>
#include <string.h>

#define TOKEN_ATTR (14)
#define KEYWORD_ATTR (9)
#define OPERATOR_ATTR (7)
#define CONSTANT_ATTR (13)
#define IDENTIFIER_ATTR (11)
#define PREPROCESS_ATTR (4)
#define COMMENT_ATTR (2)
#define ERROR_ATTR (12)

int yywrap(void);
int resKeyword( char* word );
int wordCmp( const void *a, const void *b );

int tokenNum = 0;
int keywordNum = 0;
int operatorNum = 0;
int constantNum = 0;
int identifierNum = 0;
int preprocStmtNum = 0;
int commentNum = 0;

HANDLE Ghstdout;
FILE *resultFile;
%}

/*规则段*/
%%

{comment}	{
	SetConsoleTextAttribute( Ghstdout , COMMENT_ATTR );
	printf( "%s", yytext );
	fprintf( resultFile, "注释：%s\n", yytext );
	commentNum++;
}

"/*" {
	BEGIN BLOCKCOMMENT;
}

<BLOCKCOMMENT>"*/" {
	BEGIN 0;
}

<BLOCKCOMMENT>. {
	;
}
<BLOCKCOMMENT>"\n" {
	;
}

{PreprocessStatment}	{
	SetConsoleTextAttribute( Ghstdout , PREPROCESS_ATTR );
	printf( "%s", yytext );
	fprintf( resultFile, "预处理语句：%s\n", yytext );
	preprocStmtNum++;
}

{constant}	{
	SetConsoleTextAttribute( Ghstdout , CONSTANT_ATTR );
	printf( "%s", yytext );
	fprintf( resultFile, "常量：%s\n", yytext );
	operatorNum++;
}

{operator}	{
	int id = 0;
	SetConsoleTextAttribute( Ghstdout , OPERATOR_ATTR );
	while( yyleng > 0 ) {
		id += yytext[--yyleng];
	}
	printf( "%s", yytext );
	fprintf( resultFile, "操作符(%d)：%s\n", id, yytext );
	constantNum++;
}

{word}	{
	int id;
	if ( (id = resKeyword( yytext )) >= 0 ) {
		SetConsoleTextAttribute( Ghstdout , KEYWORD_ATTR );
		printf( "%s", yytext );
		fprintf( resultFile, "关键字(%d)：%s\n", id, yytext );
		keywordNum++;
	} else {
		SetConsoleTextAttribute( Ghstdout , IDENTIFIER_ATTR );
		printf( "%s", yytext );
		fprintf( resultFile, "标识符：%s\n", yytext );
		identifierNum++;
	}
}

{token}	{
	SetConsoleTextAttribute( Ghstdout , TOKEN_ATTR );
	printf( "%s", yytext );
	fprintf( resultFile, "界符：%s\n", yytext );
	tokenNum++;
}

[^ \t\n]	{
	SetConsoleTextAttribute( Ghstdout , ERROR_ATTR );
	printf( "%s", yytext );
	fprintf( resultFile, "非法字符：%s\n", yytext );
}


/*用户子进程*/
%%

int main(void) {
	freopen( "in.txt", "r", stdin );
	Ghstdout = GetStdHandle( STD_OUTPUT_HANDLE );
	resultFile = fopen( "result.txt", "w" );

	yylex();

	printf("\n-------------------------------");
	SetConsoleTextAttribute( Ghstdout , PREPROCESS_ATTR );
	printf("\npreprocess statment: %d\n", preprocStmtNum);
	SetConsoleTextAttribute( Ghstdout , TOKEN_ATTR );
	printf("token: %d\n", tokenNum);
	SetConsoleTextAttribute( Ghstdout , KEYWORD_ATTR );
	printf("keyword: %d\n",keywordNum);
	SetConsoleTextAttribute( Ghstdout , OPERATOR_ATTR );
	printf("operator: %d\n",operatorNum);
	SetConsoleTextAttribute( Ghstdout , CONSTANT_ATTR );
	printf("constant: %d\n",constantNum);
	SetConsoleTextAttribute( Ghstdout , IDENTIFIER_ATTR );
	printf("identifier: %d\n",identifierNum);
	SetConsoleTextAttribute( Ghstdout , COMMENT_ATTR );
	printf("comment: %d\n",commentNum);
	return 0;
}

int yywrap(void) {
	return 1;
}

int wordCmp( const void *a, const void *b ) {
	return strncmp( (const char*)a, (const char*)b, 9 );
}

int resKeyword( char* word ) {
	static const char keywords[32][10] = {"auto", "break", "case", "char", "const", "continue", "default", "do", "double",
		"else","enum", "extern","float", "for", "goto", "if", "int", "long","register", "return", "short", "signed", "sizeof",
	 	"static","struct", "switch", "typedef", "union", "unsigned", "void","volatile", "while" };
		 
    char * p = (char *)bsearch( word, keywords, 32, 10, wordCmp );
    return (p==NULL)?(-1):(( p - keywords[0])/10);
}
