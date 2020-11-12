del /f flex.exe >nul 2>&1
del /f flex.yy.c >nul 2>&1
flex -oflex.yy.c flex.lex
gcc -o flex.exe flex.yy.c