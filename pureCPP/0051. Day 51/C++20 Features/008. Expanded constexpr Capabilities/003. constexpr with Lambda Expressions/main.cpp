#include <iostream>

int main() {
    constexpr auto square = [](int x) { return x * x; };
    constexpr int result = square(5);

    std::cout << "Square of 5: " << result << "\n";
}
