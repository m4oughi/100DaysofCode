#include <iostream>
#include <tuple>
#include <type_traits>

int main() {
    std::tuple<int, double, std::string, char> t(1, 2.71, "Tuple", 'A');

    std::cout << "Size of tuple: " << std::tuple_size<decltype(t)>::value << "\n";

    return 0;
}
