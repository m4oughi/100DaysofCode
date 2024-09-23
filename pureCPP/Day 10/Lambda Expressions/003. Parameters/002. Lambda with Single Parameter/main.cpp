#include <iostream>

int main() {
    // Lambda with one parameter
    auto singleParam = [](int n) {
        std::cout << "The value of n is: " << n << std::endl;
    };
    singleParam(42);
    return 0;
}
