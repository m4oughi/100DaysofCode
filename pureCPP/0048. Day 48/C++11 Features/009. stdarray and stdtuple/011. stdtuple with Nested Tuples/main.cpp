#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, std::tuple<std::string, double>> nestedTuple = {10, {"C++11", 2.718}};

    std::cout << "First Value: " << std::get<0>(nestedTuple) << std::endl;
    std::cout << "Nested String: " << std::get<0>(std::get<1>(nestedTuple)) << std::endl;
    std::cout << "Nested Double: " << std::get<1>(std::get<1>(nestedTuple)) << std::endl;

    return 0;
}
