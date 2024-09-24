#include <iostream>

int main() {
    int x = 10;
    auto displayX = [x]() { std::cout << "Value of x: " << x << std::endl; };
    displayX();
    return 0;
}
