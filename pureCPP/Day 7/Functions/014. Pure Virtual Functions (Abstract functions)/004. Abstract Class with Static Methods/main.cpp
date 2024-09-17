#include <iostream>

class AbstractCalculator {
public:
    static void printWelcome() {
        std::cout << "Welcome to the Abstract Calculator!" << std::endl;
    }

    virtual int calculate(int a, int b) const = 0;  // Pure virtual function
};

class Calculator : public AbstractCalculator {
public:
    int calculate(int a, int b) const override {
        return a + b;  // Simple addition
    }
};

int main() {
    AbstractCalculator::printWelcome();

    Calculator calc;
    std::cout << "Result: " << calc.calculate(3, 5) << std::endl;

    return 0;
}
