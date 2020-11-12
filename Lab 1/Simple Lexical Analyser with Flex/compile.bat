del /f flex.exe
del /f flex.yy.c
flex -oflex.yy.c flex.lex
gcc -o flex.exe flex.yy.c