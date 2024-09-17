#include <iostream>

inline void printValue(const int& x) {
    std::cout << "Value: " << x << std::endl;
}

int main() {
    int num = 42;
    printValue(num);  // Pass by const reference
    return 0;
}
