#include <iostream>
#include <stack>

bool isBalanced(const std::string& expr) {
    std::stack<char> s;
    for (char ch : expr) {
        if (ch == '(') {
            s.push(ch);
        } else if (ch == ')') {
            if (s.empty()) return false; // No matching '('
            s.pop();
        }
    }
    return s.empty(); // Stack should be empty if balanced
}

int main() {
    std::string expr = "(())()";
    std::cout << (isBalanced(expr) ? "Balanced" : "Not Balanced") << std::endl;
    return 0;
}
