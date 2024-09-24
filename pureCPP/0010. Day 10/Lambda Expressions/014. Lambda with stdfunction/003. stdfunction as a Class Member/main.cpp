#include <iostream>
#include <functional>

class Calculator {
public:
    std::function<int(int, int)> operation;

    void setOperation(const std::function<int(int, int)>& op) {
        operation = op;
    }

    int execute(int a, int b) {
        return operation(a, b);
    }
};

int main() {
    Calculator calc;

    calc.setOperation([](int a, int b) {
        return a * b;
    });

    std::cout << "Multiplication: " << calc.execute(5, 3) << std::endl; // Outputs: Multiplication: 15

    return 0;
}
