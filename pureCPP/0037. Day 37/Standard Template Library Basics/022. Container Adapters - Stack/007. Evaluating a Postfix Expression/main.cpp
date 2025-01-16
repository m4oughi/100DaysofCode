#include <iostream>
#include <stack>
#include <string>

int evaluatePostfix(const std::string& expression) {
    std::stack<int> s;
    for (char ch : expression) {
        if (std::isdigit(ch)) {
            s.push(ch - '0');
        } else {
            int operand2 = s.top(); s.pop();
            int operand1 = s.top(); s.pop();
            switch (ch) {
                case '+': s.push(operand1 + operand2); break;
                case '-': s.push(operand1 - operand2); break;
                case '*': s.push(operand1 * operand2); break;
                case '/': s.push(operand1 / operand2); break;
            }
        }
    }
    return s.top();
}

int main() {
    std::string postfix = "53+82-*";
    std::cout << "Result of postfix expression: " << evaluatePostfix(postfix) << "\n";

    return 0;
}
