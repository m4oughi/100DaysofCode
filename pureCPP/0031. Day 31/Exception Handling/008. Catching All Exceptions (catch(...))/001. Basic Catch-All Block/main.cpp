#include <iostream>

int main() {
    try {
        throw 42;  // Throwing an integer
    } catch (...) {
        std::cout << "Caught an unknown exception" << std::endl;
    }
    return 0;
}
