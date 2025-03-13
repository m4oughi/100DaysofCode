#include <iostream>
#include <tuple>
#include <utility>

template <typename Tuple, std::size_t... Indices>
void printTuple(const Tuple& tup, std::index_sequence<Indices...>) {
    ((std::cout << std::get<Indices>(tup) << " "), ...);
    std::cout << std::endl;
}

int main() {
    std::tuple<int, double, char> tup = {42, 3.14, 'A'};
    printTuple(tup, std::make_index_sequence<3>{}); // Output: 42 3.14 A
    return 0;
}
