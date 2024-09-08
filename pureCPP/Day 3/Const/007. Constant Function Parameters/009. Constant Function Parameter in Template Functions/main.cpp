#include <iostream>

template <typename T>
void printValue(const T &val) {
    std::cout << val << std::endl;
    // val = T(); // NOT allowed: modifying the const parameter is not allowed
}

int main() {
    int e = 180;
    double f = 190.5;

    printValue(e); // Passing int as a const parameter
    printValue(f); // Passing double as a const parameter

    return 0;
}