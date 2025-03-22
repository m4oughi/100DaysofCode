#include <iostream>

namespace Company::Product {
    void greet() {
        std::cout << "Welcome to Company Product!\n";
    }
}

int main() {
    Company::Product::greet();
    return 0;
}
