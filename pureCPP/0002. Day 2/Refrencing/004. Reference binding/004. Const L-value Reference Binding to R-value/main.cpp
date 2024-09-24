#include <iostream>

int main() {
    const int &ref = 100;  // OK: Binds to temporary 100
    std::cout << ref << std::endl;  // Output: 100

    return 0;
}