#include <iostream>

template <typename T>
class Adder {
private:
    T value;

public:
    Adder(T val) : value(val) {}

    T operator()(T operand) const {
        return operand + value;
    }
};

int main() {
    Adder<int> intAdder(5);
    std::cout << "5 + 3 = " << intAdder(3) << std::endl;  // Output: 5 + 3 = 8

    Adder<double> doubleAdder(3.5);
    std::cout << "3.5 + 2.5 = " << doubleAdder(2.5) << std::endl;  // Output: 3.5 + 2.5 = 6.0

    return 0;
}
