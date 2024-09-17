#include <iostream>

template <typename T1, typename T2>
void printTypes(T1 a, T2 b) {
    std::cout << "T1: " << a << ", T2: " << b << std::endl;
}

int main() {
    printTypes(5, 10.5);   // T1 = int, T2 = double
    printTypes('A', "Hello");  // T1 = char, T2 = const char*

    return 0;
}
