#include <iostream>
#include <tuple>

template <typename Tuple>
void processTuple(const Tuple& t) {
    if constexpr (std::tuple_size_v<Tuple> == 2) {
        std::cout << "Tuple has exactly 2 elements\n";
    } else {
        std::cout << "Tuple has more or fewer than 2 elements\n";
    }
}

int main() {
    std::tuple<int, double> t1;
    std::tuple<int, double, char> t2;

    processTuple(t1); // Output: Tuple has exactly 2 elements
    processTuple(t2); // Output: Tuple has more or fewer than 2 elements
    return 0;
}
