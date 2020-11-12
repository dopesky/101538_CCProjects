## Sample Lexical Analyser Using Flex
This simple flex program that is able to recognise capital letters from a string of input.

## How to run
You can just run the `compile.bat` file to generate the `sample.exe` executable file which you can run directly. 

**NB:** If you make any changes to the `sample.lex` file, you have to run the `compile.bat` file in order to produce a new executable file(`sample.exe`) with your changes.

## Requirements
You should have **flex for windows** which will be used to compile the `.lex` file to a `.yy.c` file. You will then need the c++ compiler (`gcc.exe`) which will be used to compile the `.yy.c` file to a `.exe` executable file. You will also need to ensure that the folders containing the `sample.exe` and `gcc.exe` are in your Environment Variables. 
