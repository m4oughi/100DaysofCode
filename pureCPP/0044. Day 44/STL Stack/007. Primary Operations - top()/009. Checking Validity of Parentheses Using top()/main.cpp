#include <iostream>
#include <stack>

bool isValid(const std::string& s) {
    std::stack<char> stack;
    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            stack.push(ch);
        } else {
            if (stack.empty()) return false;
            char topChar = stack.top();
            stack.pop();
            if ((ch == ')' && topChar != '(') ||
                (ch == '}' && topChar != '{') ||
                (ch == ']' && topChar != '[')) {
                return false;
            }
        }
    }
    return stack.empty();
}

int main() {
    std::string expr = "{[()]}";
    std::cout << (isValid(expr) ? "Balanced" : "Not Balanced") << std::endl;

    return 0;
}
