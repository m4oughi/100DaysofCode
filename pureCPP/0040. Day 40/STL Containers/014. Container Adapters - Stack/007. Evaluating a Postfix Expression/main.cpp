#include <iostream>
#include <stack>
#include <sstream>

int evaluatePostfix(const std::string& expr) {
    std::stack<int> s;
    std::istringstream iss(expr);
    std::string token;

    while (iss >> token) {
        if (isdigit(token[0])) {
            s.push(std::stoi(token));
        } else {
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();
            switch (token[0]) {
                case '+': s.push(a + b); break;
                case '-': s.push(a - b); break;
                case '*': s.push(a * b); break;
                case '/': s.push(a / b); break;
            }
        }
    }
    return s.top();
}

int main() {
    std::string postfix = "5 3 + 8 *"; // (5 + 3) * 8
    std::cout << "Result: " << evaluatePostfix(postfix) << "\n"; // 64
    return 0;
}
