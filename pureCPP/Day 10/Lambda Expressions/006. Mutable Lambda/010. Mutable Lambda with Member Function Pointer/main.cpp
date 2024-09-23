#include <iostream>

struct Calculator {
    int value = 0;
    void add(int x) { value += x; }
    void subtract(int x) { value -= x; }
};

int main() {
    Calculator calc;
    auto operate = [&calc, operation = &Calculator::add]() mutable {
        (calc.*operation)(5); // Invokes the captured member function pointer
        std::cout << "Calculator value: " << calc.value << std::endl;
        operation = &Calculator::subtract; // Switch to another operation
    };

    operate(); // Outputs: Calculator value: 5
    operate(); // Outputs: Calculator value: 0
    return 0;
}
