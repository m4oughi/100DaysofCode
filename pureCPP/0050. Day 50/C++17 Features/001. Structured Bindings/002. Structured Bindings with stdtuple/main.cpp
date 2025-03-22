#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, double, std::string> t = {10, 2.71, "Hello"};

    auto [a, b, c] = t;

    std::cout << "a: " << a << ", b: " << b << ", c: " << c << '\n';
    return 0;
}
