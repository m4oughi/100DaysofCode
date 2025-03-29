#include <iostream>

class Calculator {
public:
    int factor = 10;

    void compute() {
        auto multiply = [this]<typename T>(T value) { return value * factor; };
        std::cout << "5 * factor = " << multiply(5) << "\n";
    }
};

int main() {
    Calculator calc;
    calc.compute();
}
