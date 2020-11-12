del /f sample.exe
del /f sample.yy.c
flex -osample.yy.c sample.lex
gcc -o sample.exe sample.yy.c