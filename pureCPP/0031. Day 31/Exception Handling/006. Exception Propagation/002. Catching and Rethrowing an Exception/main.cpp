#include <iostream>

void level2() {
    throw std::runtime_error("Exception in level2");
}

void level1() {
    try {
        level2();
    } catch (const std::runtime_error& e) {
        std::cout << "Caught in level1: " << e.what() << std::endl;
        throw;  // Rethrowing the exception
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
