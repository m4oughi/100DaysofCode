#include <iostream>

const int& getReference() {
    return y; // Returning a constant reference to y
}

int main() {
    int y = 60;

    const int& ref = getReference();
    // ref = 70; // NOT allowed: modifying the value through the reference is not allowed
    
    return 0;
}