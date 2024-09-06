#include <iostream>

int main() {
    int x = 20;
    const int &ref = x;  // Binds to non-const x, but ref cannot modify x
    // ref = 30;  // Error: Cannot modify x through ref
    x = 30;  // OK: Direct modification of x
    std::cout << ref << std::endl;  // Output: 30

    return 0;
}