#include <iostream>
#include <functional>

struct Calculator {
    int multiply(int a, int b) { return a * b; }
};

int main() {
    Calculator calc;
    int result = std::invoke(&Calculator::multiply, calc, 3, 7);
    
    std::cout << "Member Function Result: " << result << "\n";
    return 0;
}
