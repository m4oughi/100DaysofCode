#include <iostream>

int main() {
    try {
        throw "An error occurred";  // Throwing a string
    } catch (int e) {
        std::cout << "Caught an integer: " << e << std::endl;
    } catch (...) {
        std::cout << "Caught an unknown exception" << std::endl;
    }
    return 0;
}
