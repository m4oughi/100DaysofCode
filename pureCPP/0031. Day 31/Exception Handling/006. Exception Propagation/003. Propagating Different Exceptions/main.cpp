#include <iostream>
#include <stdexcept>

void level3() {
    throw std::invalid_argument("Exception in level3");
}

void level2() {
    try {
        level3();
    } catch (const std::invalid_argument& e) {
        std::cout << "Caught in level2: " << e.what() << std::endl;
        throw std::runtime_error("New exception in level2");
    }
}

void level1() {
    try {
        level2();
    } catch (const std::runtime_error& e) {
        std::cout << "Caught in level1: " << e.what() << std::endl;
        throw;  // Rethrowing
    }
}

int main() {
    try {
        level1();
    } catch (const std::runtime_error& e) {
        std::cout << "Caught in main: " << e.what() << std::endl;
    }
    return 0;
}