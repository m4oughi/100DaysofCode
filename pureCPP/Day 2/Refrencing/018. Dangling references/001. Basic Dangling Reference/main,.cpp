#include <iostream>

const int& getDanglingReference() {
    int localVar = 100;  // Local variable
    return localVar;     // Dangling reference
}

int main() {
    const int& ref = getDanglingReference();  // Dangling reference
    std::cout << "Dangling Reference: " << ref << std::endl;  // Undefined behavior

    return 0;
}
