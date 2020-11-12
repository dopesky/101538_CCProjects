#include "Lexer.h"
#include <windows.h>

using namespace std;

int main() {
	cout << "\n\n\nThis is a simple Lexical Analyser that takes simple mathematical expressions and outputs the tokens from the them. " << endl << "It Accepts only Numbers and Operators(+, -, *, /, %, =)" << endl << "e.g 12 + 12 = 144" << endl << endl << endl;
	
	string input;
	
	cout << "Input a simple math expression: ";
	getline(cin >> ws, input);

	map<size_t, pair<string, string>> matches = Lexer(input).getTokens();
	
	if(matches.size() > 0) cout << endl << endl << "Valid Tokens from your input are:" << endl << endl << endl;
	else cout << endl << endl << "No Valid Tokens were found in your Input!" << endl << endl;

	for (auto match = matches.begin(); match != matches.end(); ++match)
		cout << match->second.first << " " << match->second.second << endl << endl;

	system("pause");
	return 0;
}