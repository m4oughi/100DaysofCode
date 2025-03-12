#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, double, std::string> myTuple(10, 3.14, "C++11");

    std::cout << "Integer: " << std::get<0>(myTuple) << "\n";
    std::cout << "Double: " << std::get<1>(myTuple) << "\n";
    std::cout << "String: " << std::get<2>(myTuple) << "\n";

    return 0;
}
