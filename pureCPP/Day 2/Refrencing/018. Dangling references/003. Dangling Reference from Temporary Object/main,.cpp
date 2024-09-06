#include <iostream>

const int& getTemporaryReference() {
    return 200;  // Temporary object
}

int main() {
    const int& ref = getTemporaryReference();  // Dangling reference
    std::cout << "Dangling Reference: " << ref << std::endl;  // Undefined behavior

    return 0;
}
