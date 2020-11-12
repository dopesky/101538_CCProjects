%{ 
int count = 0; 
%} 

%% 
[A-Z] {printf("%s is a Capital Letter\n\n", yytext); count++;} 
.     {printf("%s is not a Capital Letter\n\n", yytext);} 
\n    {return 0;} 
%% 
  
int yywrap(){} 
int main(){ 
	printf("\n\n\nThis is a simple Flex Program that is able to recognise Capital Letters from a string of input.\n\n\n");
	printf("Input anything: ");
	yylex(); 
	printf("\nNumber of Captial letters in the given input - %d\n", count); 
	system("pause");
	return 0; 
}