#include <iostream>

template <typename T>
inline T add(T a, T b) {
    return a + b;
}

int main() {
    std::cout << "Sum of integers: " << add(10, 20) << std::endl;
    std::cout << "Sum of doubles: " << add(3.14, 2.71) << std::endl;
    return 0;
}
