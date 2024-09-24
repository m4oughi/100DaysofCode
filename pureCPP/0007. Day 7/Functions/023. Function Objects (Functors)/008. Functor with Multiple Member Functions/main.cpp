#include <iostream>

class Calculator {
public:
    int add(int a, int b) const {
        return a + b;
    }

    int multiply(int a, int b) const {
        return a * b;
    }
};

class Functor {
private:
    Calculator calc;
    char op;

public:
    Functor(char operation) : op(operation) {}

    int operator()(int a, int b) const {
        switch (op) {
            case '+': return calc.add(a, b);
            case '*': return calc.multiply(a, b);
            default: throw std::invalid_argument("Invalid operation");
        }
    }
};

int main() {
    Functor addFunctor('+');
    Functor multiplyFunctor('*');

    std::cout << "5 + 3 = " << addFunctor(5, 3) << std::endl;  // Output: 5 + 3 = 8
    std::cout << "4 * 3 = " << multiplyFunctor(4, 3) << std::endl;  // Output: 4 * 3 = 12

    return 0;
}
