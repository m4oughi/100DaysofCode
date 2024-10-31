#include <iostream>

int riskyOperation() {
    try {
        throw std::out_of_range("Out of range");
    } catch (...) {
        std::cout << "Caught an unknown exception in riskyOperation" << std::endl;
        return -1;  // Returning an error code
    }
    return 0;
}

int main() {
    int result = riskyOperation();
    if (result == -1) {
        std::cout << "Error encountered during risky operation" << std::endl;
    }
    return 0;
}
