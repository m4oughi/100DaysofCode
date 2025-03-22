#include <iostream>
#include <tuple>

template <typename Tuple, size_t... I>
auto sumTupleImpl(const Tuple& tpl, std::index_sequence<I...>) {
    return (std::get<I>(tpl) + ...);
}

template <typename... Args>
auto sumTuple(const std::tuple<Args...>& tpl) {
    return sumTupleImpl(tpl, std::index_sequence_for<Args...>{});
}

int main() {
    std::tuple<int, int, int> tpl{1, 2, 3};
    std::cout << "Tuple Sum: " << sumTuple(tpl) << '\n';
    return 0;
}
