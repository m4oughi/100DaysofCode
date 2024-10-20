#include <iostream>

namespace Algorithms {
    template<typename T>
    void swap(T& a, T& b) {
        T temp = a;
        a = b;
        b = temp;
    }
}

int main() {
    int x = 10, y = 20;
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    Algorithms::swap(x, y);  // Encapsulated template function
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;
    return 0;
}
