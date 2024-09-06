#include <iostream>

int main () {
    int &ref = 100;  // Error: Cannot bind non-const L-value reference to an r-value

    return 0;
}