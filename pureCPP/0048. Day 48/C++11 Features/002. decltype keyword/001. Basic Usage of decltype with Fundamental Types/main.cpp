#include <iostream>

int main() {
    int x = 42;
    decltype(x) y = 10; // y is of type int

    std::cout << "x: " << x << ", y: " << y << std::endl;
    return 0;
}
