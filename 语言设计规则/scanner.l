digit			[0-9]
letter		[_A-Za-z]

/*
PreprocessStatment：# #...
word: _ A-Z a-z
constant:
operator:操作符
comment：注释

*/


PreprocessStatment		^#.*   
word			{letter}({letter}|{digit})*
constant	({digit}*\.?{digit}*|\".*\"|\'(.|\\.)\')
operator	([~!%^&*\-+=<>/()]|"<="|">="|"=="|"!="|"++"|"--"|"<<"|">>"|"<<="|">>="|"+="|"-="|"*="|"/="|"%="|"&="|"|="|"^="|"&&"|"||"|sizeof)
token		[\{\}\[\]\;\,]
comment	"//".*

