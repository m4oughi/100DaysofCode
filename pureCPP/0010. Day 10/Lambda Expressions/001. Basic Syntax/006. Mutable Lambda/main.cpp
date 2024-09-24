#include <iostream>

int main() {
    int x = 10;
    // Lambda that modifies captured value using 'mutable' keyword
    auto mutableLambda = [x]() mutable {
        x = 20;  // Allowed due to 'mutable'
        std::cout << "Modified x inside lambda: " << x << std::endl;
    };
    mutableLambda();
    std::cout << "Original x outside lambda: " << x << std::endl;
    return 0;
}
