#include <iostream>

const int getConstantValue() {
    return 10; // Returning a constant integer
}

int main() {
    int val = getConstantValue();
    // val = 20; // Allowed: modifying the copy of the returned value
    // getConstantValue() = 30; // NOT allowed: modifying the return value directly is not allowed

    return 0;
}