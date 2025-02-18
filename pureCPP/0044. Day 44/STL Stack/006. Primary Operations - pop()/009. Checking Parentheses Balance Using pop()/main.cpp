#include <iostream>
#include <stack>

bool isBalanced(const std::string& expr) {
    std::stack<char> s;

    for (char ch : expr) {
        if (ch == '(' || ch == '[' || ch == '{') {
            s.push(ch);
        } else if (ch == ')' || ch == ']' || ch == '}') {
            if (s.empty()) return false;
            
            char top = s.top();
            s.pop();
            
            if ((ch == ')' && top != '(') ||
                (ch == ']' && top != '[') ||
                (ch == '}' && top != '{')) {
                return false;
            }
        }
    }
    return s.empty();
}

int main() {
    std::string expr = "{[()]}";
    std::cout << (isBalanced(expr) ? "Balanced" : "Not Balanced") << std::endl;

    return 0;
}
