#include <iostream>
#include <stack>
#include <stdexcept>

int evaluateExpression(std::stack<int>& s) {
    if (s.size() < 2) {
        throw std::runtime_error("Invalid expression: Not enough operands!");
    }
    int b = s.top(); s.pop();
    int a = s.top(); s.pop();
    return a + b;
}

int main() {
    std::stack<int> s;
    s.push(10);

    try {
        std::cout << "Result: " << evaluateExpression(s) << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
