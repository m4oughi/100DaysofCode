#include <iostream>

void level2() {
    throw std::runtime_error("Exception in level2");  // Throwing an exception
}

void level1() {
    level2();  // Exception propagates through this function
}

int main() {
    try {
        level1();  // Exception propagates to main()
    } catch (const std::runtime_error& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
