#include <iostream>
#include <utility>

int main() {
    int x = 10;
    int y = std::move(x);  // Use std::move to transfer value

    std::cout << "x: " << x << ", y: " << y << std::endl;  // x is in an unspecified state
}
