#include <iostream>
#include <stdexcept>

void lowLevelFunction() {
    throw std::invalid_argument("Invalid argument in low-level function");
}

void highLevelFunction() {
    try {
        lowLevelFunction();
    } catch (const std::exception& e) {
        std::cout << "Caught in highLevelFunction: " << e.what() << std::endl;
        throw;  // Rethrow exception to main
    }
}

int main() {
    try {
        highLevelFunction();
    } catch (const std::exception& e) {
        std::cout << "Caught in main: " << e.what() << std::endl;
    }
    return 0;
}
