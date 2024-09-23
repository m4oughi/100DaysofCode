#include <iostream>
#include <tuple>

int main() {
    auto tuple = std::make_tuple(1, 2.5, "Hello");

    auto printTuple = [](auto&& tup) {
        auto [i, d, s] = tup;
        std::cout << "Int: " << i << ", Double: " << d << ", String: " << s << std::endl;
    };

    printTuple(tuple); // Outputs: Int: 1, Double: 2.5, String: Hello
    return 0;
}
