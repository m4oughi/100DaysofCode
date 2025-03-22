#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, double> t = {5, 10.5};

    auto& [a, b] = t;  // Using reference

    a = 42;  // Modify original value

    std::cout << "Modified tuple values: " << std::get<0>(t) << ", " << std::get<1>(t) << '\n';
    return 0;
}
