#include <iostream>

int main() {
    auto counter = []() mutable {
        static int count = 0; // Static variable inside lambda
        return ++count;
    };

    std::cout << "Count 1: " << counter() << std::endl; // Outputs: Count 1: 1
    std::cout << "Count 2: " << counter() << std::endl; // Outputs: Count 2: 2
    std::cout << "Count 3: " << counter() << std::endl; // Outputs: Count 3: 3
    return 0;
}
