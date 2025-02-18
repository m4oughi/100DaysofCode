#include <iostream>
#include <stack>
#include <stdexcept>

double safeDivide(double a, double b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero is not allowed!");
    }
    return a / b;
}

int main() {
    std::stack<double> s;
    s.push(10);
    s.push(0);  // Risky value

    try {
        double b = s.top(); s.pop();
        double a = s.top(); s.pop();
        double result = safeDivide(a, b);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
