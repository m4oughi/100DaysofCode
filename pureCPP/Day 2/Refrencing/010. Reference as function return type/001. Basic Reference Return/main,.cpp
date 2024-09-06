#include <iostream>

int& getValue() {
    int localValue = 10;
    return localValue;  // Undefined behavior: Returning reference to a local variable
}

int main() {
    int &ref = getValue();  // Dangerous: ref is now a dangling reference
    // Accessing ref here leads to undefined behavior


    return 0;
}