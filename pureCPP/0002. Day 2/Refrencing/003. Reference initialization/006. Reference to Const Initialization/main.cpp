#include <iostream>

int main() {
    const int x = 50;
    // int &ref = x;  // Error: cannot bind non-const reference to const
    const int &ref = x;  // OK: const reference to const variable

    return 0;
}