#include <iostream>
#include <stack>
#include <stdexcept>

bool isBalanced(const std::string& expr) {
    std::stack<char> s;
    for (char ch : expr) {
        if (ch == '(') {
            s.push(ch);
        } else if (ch == ')') {
            if (s.empty()) {
                throw std::runtime_error("Unmatched closing parenthesis found!");
            }
            s.pop();
        }
    }
    if (!s.empty()) {
        throw std::runtime_error("Unmatched opening parenthesis found!");
    }
    return true;
}

int main() {
    std::string expr = "(())";

    try {
        std::cout << (isBalanced(expr) ? "Balanced" : "Not Balanced") << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
