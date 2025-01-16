#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, double, std::string> t(1, 3.14, "Alice");

    std::cout << "First: " << std::get<0>(t) << "\n";
    std::cout << "Second: " << std::get<1>(t) << "\n";
    std::cout << "Third: " << std::get<2>(t) << "\n";

    return 0;
}
