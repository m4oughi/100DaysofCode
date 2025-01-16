#include <iostream>
#include <tuple>

int main() {
    auto t = std::make_tuple(42, 2.718, "Hello");

    std::cout << "Integer: " << std::get<0>(t) << "\n";
    std::cout << "Double: " << std::get<1>(t) << "\n";
    std::cout << "String: " << std::get<2>(t) << "\n";

    return 0;
}
