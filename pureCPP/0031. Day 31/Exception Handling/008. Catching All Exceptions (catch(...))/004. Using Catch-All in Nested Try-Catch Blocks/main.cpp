#include <iostream>

void level2() {
    throw std::logic_error("Logic error in level2");
}

void level1() {
    try {
        level2();
    } catch (...) {
        std::cout << "Caught an exception in level1" << std::endl;
        throw;  // Rethrowing to propagate
    }
}

int main() {
    try {
        level1();
    } catch (...) {
        std::cout << "Caught an unknown exception in main" << std::endl;
    }
    return 0;
}
