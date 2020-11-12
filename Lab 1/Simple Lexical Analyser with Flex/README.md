## Simple Lexical Analyser
This program showcases a simple lexical analyser that recognises a simple mathematical expression and outputs the tokens from it. It was built using **flex**.

## How to run
You can just run the `compile.bat` file to generate the `flex.exe` executable file which you can run directly. 

**NB:** If you make any changes to the `flex.lex` file, you have to run the `compile.bat` file in order to produce a new executable file(`flex.exe`) with your changes.

## Requirements
You should have **flex for windows** which will be used to compile the `.lex` file to a `.yy.c` file. You will then need the c++ compiler (`gcc.exe`) which will be used to compile the `.yy.c` file to a `.exe` executable file. You will also need to ensure that the folders containing the `flex.exe` and `gcc.exe` are in your Environment Variables. 
