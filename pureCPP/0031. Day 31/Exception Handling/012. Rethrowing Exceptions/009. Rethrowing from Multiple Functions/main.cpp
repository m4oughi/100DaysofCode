#include <iostream>
#include <stdexcept>

void lowLevelFunction() {
    throw std::runtime_error("Error in lowLevelFunction");
}

void midLevelFunction() {
    try {
        lowLevelFunction();
    } catch (...) {
        std::cout << "Caught in midLevelFunction, rethrowing..." << std::endl;
        throw;
    }
}

void highLevelFunction() {
    try {
        midLevelFunction();
    } catch (const std::exception& e) {
        std::cout << "Caught in highLevelFunction: " << e.what() << std::endl;
        throw;  // Rethrow for higher-level handling
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
