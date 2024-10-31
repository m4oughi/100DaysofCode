#include <iostream>

void doSomething() {
    throw std::runtime_error("Error occurred in doSomething");
}

int main() {
    try {
        doSomething();
    } catch (const std::exception& e) {
        std::cout << "Caught standard exception: " << e.what() << std::endl;
    } catch (...) {
        std::cout << "Caught an unknown exception" << std::endl;
    }
    std::cout << "Continuing program..." << std::endl;
    return 0;
}
