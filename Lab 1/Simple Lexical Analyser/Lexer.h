#include <string>
#include <regex>
#include <map>
#include <iostream>

using namespace std;

/**
* This is a simple Lexical Analyser that is able to take a simple and valid mathematical expression
* and output the tokens from the it.
*/
class Lexer{
	string validNumberRegex = "[0-9]+";
	string validOperatorsRegex = "\\*|\\+|=|\\/|\\%|-";
	string input;

	map<size_t, pair<string, string>> getPairsForType(string regexString, string type);
	void validateInput();
public:
	Lexer(string input) { this->input = input; validateInput(); }
	map<size_t, pair<string, string>> getTokens();
};