#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, double, std::string> myTuple(42, 3.14, "Hello");

    // Get values by type instead of index
    std::cout << "Integer: " << std::get<int>(myTuple) << "\n";
    std::cout << "Double: " << std::get<double>(myTuple) << "\n";
    std::cout << "String: " << std::get<std::string>(myTuple) << "\n";

    return 0;
}
