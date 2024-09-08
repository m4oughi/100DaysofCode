#include <iostream>

int main() {
    static int staticValue = 90;

    auto lambda = []() {
        static int staticValue = 100; // Static variable inside lambda
        std::cout << "Static variable inside lambda: " << staticValue << std::endl;
    };

    lambda(); // Prints Static variable inside lambda: 100
}
