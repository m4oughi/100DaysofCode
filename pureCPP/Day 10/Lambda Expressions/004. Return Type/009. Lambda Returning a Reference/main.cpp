#include <iostream>

int main() {
    int a = 5;
    // Lambda returning a reference to an integer
    auto returnReference = [&]() -> int& {
        return a;
    };
    returnReference() = 10; // Modifies 'a' through the lambda
    std::cout << "Modified a: " << a << std::endl; // Outputs: Modified a: 10
    return 0;
}
