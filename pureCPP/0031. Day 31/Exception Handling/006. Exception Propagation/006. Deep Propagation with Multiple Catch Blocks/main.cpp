#include <iostream>
#include <stdexcept>

void level4() {
    throw std::runtime_error("Error in level4");
}

void level3() {
    level4();  // Propagating through level3
}

void level2() {
    try {
        level3();
    } catch (const std::runtime_error& e) {
        std::cout << "Caught in level2: " << e.what() << std::endl;
        throw;  // Rethrowing to propagate further
    }
}

void level1() {
    try {
        level2();
    } catch (const std::runtime_error& e) {
        std::cout << "Caught in level1: " << e.what() << std::endl;
        throw;  // Rethrowing to main
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
