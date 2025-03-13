#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, double, std::string> myTuple = {42, 3.14, "Hello"};

    auto [i, d, s] = myTuple; // Structured binding (C++17)

    std::cout << "Extracted values: " << i << ", " << d << ", " << s << "\n";

    return 0;
}
