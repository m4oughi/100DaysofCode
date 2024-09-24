#include <iostream>

int main() {
    int b = 140;
    int c = 150;

    int &const ref = b; // Top-level const with references (not a valid C++ syntax)
    // ref = c; // NOT allowed: changing the reference is not allowed

    // Note: The above syntax is incorrect as references in C++ cannot be reassigned once initialized.


    return 0;
}