#include <iostream>
#include <utility>

int main() {
    int a = 5, b = 10;

    std::cout << "Before swap: a = " << a << ", b = " << b << "\n";
    std::swap(a, b);
    std::cout << "After swap: a = " << a << ", b = " << b << "\n";

    return 0;
}
