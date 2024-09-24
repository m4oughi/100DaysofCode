#include <iostream>

int& getDanglingReference() {
    static int value = 50;  // Static variable, remains valid
    return value;           // Safe
}

int main() {
    int& ref = getDanglingReference();  // Valid reference
    std::cout << "Value: " << ref << std::endl;

    return 0;
}
