#include <iostream>

using namespace std;

int evaluateExpression(string expr, int& index);
int parseNumber(string expr, int& index);

int evaluateExpression(string expr, int& index) {
    int result = parseNumber(expr, index);

    while (index < expr.length() && expr[index] != ')') {
        char op = expr[index++];
        int nextNum = parseNumber(expr, index);

        if (op == '+') result += nextNum;
        else if (op == '-') result -= nextNum;
    }

    return result;
}

int parseNumber(string expr, int& index) {
    int num = 0;
    while (index < expr.length() && isdigit(expr[index])) {
        num = num * 10 + (expr[index++] - '0');
    }
    return num;
}
