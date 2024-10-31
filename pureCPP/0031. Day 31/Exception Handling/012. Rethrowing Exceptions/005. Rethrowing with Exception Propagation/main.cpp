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
        throw;  // Propagate the exception upwards
    }
}

int main() {
    try {
        midLevelFunction();
    } catch (const std::runtime_error& e) {
        std::cout << "Caught in main: " << e.what() << std::endl;
    }
    return 0;
}
