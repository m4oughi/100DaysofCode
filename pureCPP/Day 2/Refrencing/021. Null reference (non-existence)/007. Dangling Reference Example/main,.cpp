#include <iostream>

const int& createReference() {
    int temp = 30;
    return temp;  // Dangerous: returning reference to local variable
}

int main() {
    const int& ref = createReference();  // Dangling reference
    std::cout << "Value: " << ref << std::endl;  // Undefined behavior

    return 0;
}
