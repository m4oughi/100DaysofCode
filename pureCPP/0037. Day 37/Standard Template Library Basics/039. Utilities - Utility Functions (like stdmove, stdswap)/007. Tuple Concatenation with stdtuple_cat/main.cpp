#include <iostream>
#include <tuple>

int main() {
    auto t1 = std::make_tuple(1, "Hello");
    auto t2 = std::make_tuple(3.14, 'A');

    auto t3 = std::tuple_cat(t1, t2);

    std::cout << "Concatenated Tuple:\n";
    std::cout << "First: " << std::get<0>(t3) << "\n";
    std::cout << "Second: " << std::get<1>(t3) << "\n";
    std::cout << "Third: " << std::get<2>(t3) << "\n";
    std::cout << "Fourth: " << std::get<3>(t3) << "\n";

    return 0;
}
