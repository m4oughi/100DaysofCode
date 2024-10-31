#include <iostream>

int main() {
    try {
        throw 42;  // Throwing an integer
    } catch (...) {
        std::cout << "Caught an exception of any type!" << std::endl;
    }
    return 0;
}
