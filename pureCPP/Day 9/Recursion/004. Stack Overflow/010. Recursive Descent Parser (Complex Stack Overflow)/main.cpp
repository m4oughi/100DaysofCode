#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string input;
int currentIndex = 0;

// Forward declarations
bool parseExpression();
bool parseRestExpression();
bool parseTerm();
bool parseRestTerm();
bool parseFactor();
bool isNumber();
bool parseParenthesis();

// Function to parse an expression: Term followed by RestExpression
bool parseExpression() {
    return parseTerm() && parseRestExpression();
}

// Function to parse the rest of the expression (optional part with + or -)
bool parseRestExpression() {
    while (currentIndex < input.length() && (input[currentIndex] == '+' || input[currentIndex] == '-')) {
        currentIndex++; // Consume '+' or '-'
        if (!parseTerm())
            return false;
    }
    return true;
}

// Function to parse a term: Factor followed by RestTerm
bool parseTerm() {
    return parseFactor() && parseRestTerm();
}

// Function to parse the rest of the term (optional part with * or /)
bool parseRestTerm() {
    while (currentIndex < input.length() && (input[currentIndex] == '*' || input[currentIndex] == '/')) {
        currentIndex++; // Consume '*' or '/'
        if (!parseFactor())
            return false;
    }
    return true;
}

// Function to parse a factor (either a number or an expression in parentheses)
bool parseFactor() {
    return isNumber() || parseParenthesis();
}

// Function to parse a number
bool isNumber() {
    if (isdigit(input[currentIndex])) {
        while (currentIndex < input.length() && isdigit(input[currentIndex])) {
            currentIndex++; // Consume the entire number
        }
        return true;
    }
    return false;
}

// Function to parse parentheses (an expression enclosed in parentheses)
bool parseParenthesis() {
    if (input[currentIndex] == '(') {
        currentIndex++; // Consume '('
        if (!parseExpression()) return false;
        if (input[currentIndex] == ')') {
            currentIndex++; // Consume ')'
            return true;
        }
        return false; // No closing parenthesis found
    }
    return false;
}

// Main function to test the parser
int main() {
    cout << "Enter an expression: ";
    getline(cin, input);

    currentIndex = 0;
    if (parseExpression() && currentIndex == input.length()) {
        cout << "Expression is valid!" << endl;
    } else {
        cout << "Invalid expression!" << endl;
    }

    return 0;
}
