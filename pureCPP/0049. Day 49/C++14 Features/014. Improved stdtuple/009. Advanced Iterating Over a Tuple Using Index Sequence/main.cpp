#include <iostream>
#include <tuple>
#include <utility>

template <typename Tuple, std::size_t... I>
void printTuple(const Tuple& t, std::index_sequence<I...>) {
    ((std::cout << std::get<I>(t) << " "), ...); // Fold expression (C++17)
    std::cout << "\n";
}

template <typename... Args>
void printTuple(const std::tuple<Args...>& t) {
    printTuple(t, std::index_sequence_for<Args...>{});
}

int main() {
    std::tuple<int, double, std::string> myTuple = {42, 3.14, "Hello"};
    printTuple(myTuple);

    return 0;
}
