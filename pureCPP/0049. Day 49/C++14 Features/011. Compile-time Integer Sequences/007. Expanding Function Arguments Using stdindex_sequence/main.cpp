#include <iostream>
#include <tuple>
#include <utility>

template <typename Func, typename Tuple, std::size_t... Indices>
void applyImpl(Func func, const Tuple& tup, std::index_sequence<Indices...>) {
    func(std::get<Indices>(tup)...);
}

template <typename Func, typename... Args>
void apply(Func func, const std::tuple<Args...>& tup) {
    applyImpl(func, tup, std::make_index_sequence<sizeof...(Args)>{});
}

void printValues(int a, double b, char c) {
    std::cout << "Values: " << a << ", " << b << ", " << c << std::endl;
}

int main() {
    std::tuple<int, double, char> data = {42, 3.14, 'X'};
    apply(printValues, data); // Output: Values: 42, 3.14, X
    return 0;
}
