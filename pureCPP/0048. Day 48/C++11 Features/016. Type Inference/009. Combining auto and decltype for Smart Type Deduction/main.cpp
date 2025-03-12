#include <iostream>

int main() {
    int x = 10;
    decltype(x) y = 20;  // `y` is int

    auto z = y + 30;  // `z` is also int
    std::cout << "z: " << z << "\n";

    return 0;
}
