#include <iostream>
#include <stack>

bool isBalanced(const std::string& expr) {
    std::stack<char> s;

    for (char ch : expr) {
        if (ch == '(') {
            s.push(ch);
        } else if (ch == ')') {
            if (s.size() == 0) return false;
            s.pop();
        }
    }

    return s.size() == 0;
}

int main() {
    std::string expr = "((2+3) * (5-2))";
    std::cout << (isBalanced(expr) ? "Balanced" : "Not Balanced") << std::endl;

    return 0;
}
