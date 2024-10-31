#include <iostream>

int main() {
    try {
        throw 42;  // Throwing an integer
    } catch (int e) {
        std::cout << "Caught an integer: " << e << std::endl;
    } catch (...) {
        std::cout << "Caught an unknown exception" << std::endl;
    }
    return 0;
}
