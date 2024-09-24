#include <iostream>

int main() {
    int value = 10;
    auto changeValue = [&value]() mutable {
        value += 5; // Modifies the captured reference directly
        std::cout << "Inside lambda, value: " << value << std::endl;
    };

    changeValue(); // Outputs: Inside lambda, value: 15
    std::cout << "Outside lambda, value: " << value << std::endl; // Outputs: Outside lambda, value: 15
    return 0;
}
