#include <iostream>
#include <stack>
#include <string>

bool isBalanced(const std::string& str) {
    std::stack<char> s;
    for (char ch : str) {
        if (ch == '(') {
            s.push(ch);
        } else if (ch == ')') {
            if (s.empty()) return false;
            s.pop();
        }
    }
    return s.empty();
}

int main() {
    std::string expression = "(1 + (2 * 3) + (4 / 2))";
    std::cout << "Is the expression balanced? " << (isBalanced(expression) ? "Yes" : "No") << "\n";

    return 0;
}
