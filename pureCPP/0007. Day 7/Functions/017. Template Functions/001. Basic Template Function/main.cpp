#include <iostream>

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    std::cout << "Sum (int): " << add(5, 10) << std::endl;
    std::cout << "Sum (double): " << add(5.5, 10.5) << std::endl;
    
    return 0;
}
