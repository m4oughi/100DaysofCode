#include <iostream>

const int getValue() {
    return 120; // The returned value is a top-level const
}

int main() {
    const int val = getValue(); // val is a top-level const
    // val = 130; // NOT allowed: modifying the value of val is not allowed

    return 0;
}