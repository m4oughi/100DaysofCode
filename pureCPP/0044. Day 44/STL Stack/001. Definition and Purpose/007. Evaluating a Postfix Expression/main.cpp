#include <iostream>
#include <stack>
#include <sstream>

int evaluatePostfix(const std::string &expr) {
    std::stack<int> s;
    std::istringstream tokens(expr);
    std::string token;

    while (tokens >> token) {
        if (isdigit(token[0])) {
            s.push(std::stoi(token));
        } else {
            int val2 = s.top(); s.pop();
            int val1 = s.top(); s.pop();
            
            switch (token[0]) {
                case '+': s.push(val1 + val2); break;
                case '-': s.push(val1 - val2); break;
                case '*': s.push(val1 * val2); break;
                case '/': s.push(val1 / val2); break;
            }
        }
    }
    return s.top();
}

int main() {
    std::string expr = "10 5 + 2 *"; // (10 + 5) * 2 = 30
    std::cout << "Result: " << evaluatePostfix(expr) << std::endl;
    return 0;
}
