#include <iostream>

int main() {
    const int x = 30;
    const int &ref = x;  // ref is a const reference to x
    // ref = 40;  // Error: cannot modify a const reference

    return 0;
}