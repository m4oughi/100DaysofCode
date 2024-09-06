#include <iostream>

int main() {
    const int x = 60;
    // int &ref = x;  // Error: Cannot bind non-const reference to const object
    const int &constRef = x;  // OK: Const reference to const object

    return 0;
}