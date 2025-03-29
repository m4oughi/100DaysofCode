#include <iostream>

constexpr auto square = [](int x) { return x * x; };

int main() {
    constexpr int result = square(4);
    std::cout << "Square of 4: " << result << "\n";
}
