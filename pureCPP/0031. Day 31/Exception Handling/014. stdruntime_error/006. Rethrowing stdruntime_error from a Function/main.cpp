#include <iostream>
#include <stdexcept>

void innerFunction() {
    throw std::runtime_error("Inner function error");
}

void outerFunction() {
    try {
        innerFunction();
    } catch (const std::runtime_error& e) {
        std::cout << "Caught in outerFunction: " << e.what() << std::endl;
        throw;  // Rethrow exception to be caught in main
    }
}

int main() {
    try {
        outerFunction();
    } catch (const std::runtime_error& e) {
        std::cout << "Caught in main: " << e.what() << std::endl;
    }
    return 0;
}
