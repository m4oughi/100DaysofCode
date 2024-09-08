#include <iostream>

int main() {
    const int &ref = 100; // ref is a constant reference to a temporary object
    std::cout << ref << std::endl; // Temporary object's lifetime is extended to the lifetime of ref

    return 0;
}