#include <iostream>
#include <stack>

bool isBalanced(const std::string& str) {
    std::stack<char> s;
    
    for (char c : str) {
        if (c == '(') {
            s.push(c);
        } else if (c == ')') {
            if (s.empty()) return false;
            s.pop();
        }
    }
    
    return s.empty();
}

int main() {
    std::string expression = "(())()";
    
    if (isBalanced(expression)) {
        std::cout << "Balanced\n";
    } else {
        std::cout << "Not Balanced\n";
    }

    return 0;
}
