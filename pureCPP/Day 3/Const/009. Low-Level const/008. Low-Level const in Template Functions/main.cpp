#include <iostream>

template <typename T>
void printValue(const T *ptr) {
    std::cout << *ptr << std::endl;
    // *ptr = T(); // NOT allowed: modifying the value through ptr is not allowed
}

int main() {
    int c = 180;
    double d = 190.5;

    printValue(&c); // Passing a pointer to a const int
    printValue(&d); // Passing a pointer to a const double

    return 0;
}