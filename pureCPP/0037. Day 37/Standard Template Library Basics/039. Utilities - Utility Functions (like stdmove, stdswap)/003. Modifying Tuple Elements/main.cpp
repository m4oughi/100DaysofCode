#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, double, std::string> t(10, 1.23, "World");

    std::get<0>(t) = 20;
    std::get<2>(t) = "Changed";

    std::cout << "Updated Tuple:\n";
    std::cout << "First: " << std::get<0>(t) << "\n";
    std::cout << "Second: " << std::get<1>(t) << "\n";
    std::cout << "Third: " << std::get<2>(t) << "\n";

    return 0;
}
