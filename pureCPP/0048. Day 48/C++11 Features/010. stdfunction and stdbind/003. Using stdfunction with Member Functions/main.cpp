#include <iostream>
#include <functional>

class Calculator {
public:
    int multiply(int a, int b) {
        return a * b;
    }
};

int main() {
    Calculator calc;
    std::function<int(Calculator&, int, int)> func = &Calculator::multiply;

    std::cout << "Multiplication: " << func(calc, 4, 5) << std::endl;  // Output: 20

    return 0;
}
