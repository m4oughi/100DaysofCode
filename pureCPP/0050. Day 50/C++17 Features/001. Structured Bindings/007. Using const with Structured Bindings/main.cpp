#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, double> t = {7, 3.14};

    const auto [a, b] = t;  // Using const prevents modification

    // a = 42;  // Error: a is const

    std::cout << "a: " << a << ", b: " << b << '\n';
    return 0;
}
