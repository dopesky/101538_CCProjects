%%
[^(0-9)|(\\*)|(\\+)|(=)|(\\/)|(\\%)|(-)| |\n] {printf("\nThe Input Contains Invalid Characters.\n\n");system("pause");exit(1);}
^[ \t]*[\\*|\\+|=|\\/|\\%|-]+.*$ {printf("\nThe Input Contains an Operator at the Start.\n\n");system("pause");exit(1);}
^.*[\\*|\\+|=|\\/|\\%|-]+[ \t]*$ {printf("\nThe Input Contains an Operator at the End.\n\n");system("pause");exit(1);}
[0-9]+ {printf("%s is a Number.\n\n", yytext); } 
[\\*|\\+|=|\\/|\\%|-] {printf("%s is an Operator.\n\n", yytext);}
[\n] return 0;
%%

int yywrap(){} 
int main(){ 
	printf("\n\n\nThis is a simple Lexical Analyser that takes simple mathematical expressions and outputs the tokens from the them.\nIt Accepts only Numbers and Operators(+, -, *, /, %, =)\ne.g 12 + 12 = 144\n\n\n");
	printf("Input a simple math expression: ");
	
	yylex(); 
	system("pause");
	return 0; 
} 
