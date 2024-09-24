#include <iostream>

inline int add(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Sum of 10 and 20: " << add(10, 20) << std::endl;
    return 0;
}
