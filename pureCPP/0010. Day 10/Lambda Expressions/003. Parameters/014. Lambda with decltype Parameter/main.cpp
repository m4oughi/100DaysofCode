#include <iostream>

int main() {
    double pi = 3.14159;
    // Lambda using decltype for parameter type deduction
    auto printType = [](decltype(pi) value) {
        std::cout << "Value: " << value << ", Type: " << typeid(value).name() << std::endl;
    };
    printType(2.71828); // Outputs the type of the value (double)
    return 0;
}
