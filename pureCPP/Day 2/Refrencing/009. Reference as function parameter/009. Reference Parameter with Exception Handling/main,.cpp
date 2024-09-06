#include <iostream>

void checkValue(int &value) {
    if (value < 0) {
        throw std::invalid_argument("Negative value not allowed");
    }
    value *= 2;
}

int main() {
    try {
        int num = -5;
        checkValue(num);  // Will throw an exception
    } catch (const std::invalid_argument &e) {
        std::cerr << "Error: " << e.what() << std::endl;  // Output: Error: Negative value not allowed
    }

    return 0;
}