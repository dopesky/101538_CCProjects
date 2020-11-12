#include "Lexer.h"

map<size_t, pair<string, string>> Lexer::getTokens() {
    map<size_t, pair<string, string>> numbers = getPairsForType(validNumberRegex, "is a Number");
    map<size_t, pair<string, string>> operators = getPairsForType(validOperatorsRegex, "is an Operator");

    numbers.insert(operators.begin(), operators.end());
    return numbers;
}

map<size_t, pair<string, string>> Lexer::getPairsForType(string regexString, string type) {
    map<size_t, pair<string, string>> matches;
    regex r(regexString);

    auto words_begin = sregex_iterator(input.begin(), input.end(), r);

    for (auto it = words_begin; it != sregex_iterator(); ++it)
        matches[it->position()] = make_pair(it->str(), type);

    return matches;
}

void Lexer::validateInput() {
    regex regexInvalid("^[0-9 " + validOperatorsRegex + "]+$");
    if (!regex_match(input, regexInvalid)) {
        cout << endl << endl << "Your Input Contains Invalid Tokens." << endl << endl;
        system("pause");
        exit(1);
    }

    regex regexStart("^[ \t]*[" + validOperatorsRegex + "]+.*$");
    if (regex_match(input, regexStart)) {
        cout << endl << endl << "Your Input Contains Operators at the start." << endl << endl;
        system("pause");
        exit(1);
    }

    regex regexEnd(".*[" + validOperatorsRegex + "]+[ \t]*$");
    if (regex_match(input, regexEnd)) {
        cout << endl << endl << "Your Input Contains Operators at the end." << endl << endl;
        system("pause");
        exit(1);
    }
}