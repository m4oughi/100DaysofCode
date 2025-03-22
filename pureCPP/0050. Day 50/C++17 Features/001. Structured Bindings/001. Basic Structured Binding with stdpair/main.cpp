#include <iostream>
#include <utility>

int main() {
    std::pair<int, double> p = {42, 3.14};

    auto [x, y] = p;  // Structured binding

    std::cout << "x: " << x << ", y: " << y << '\n';
    return 0;
}
