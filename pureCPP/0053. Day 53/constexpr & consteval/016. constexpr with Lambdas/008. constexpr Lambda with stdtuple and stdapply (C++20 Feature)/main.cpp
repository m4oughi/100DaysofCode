#include <iostream>
#include <tuple>
#include <utility>

int main() {
    constexpr auto sum_tuple = [](auto... args) { return (args + ...); };

    constexpr std::tuple<int, int, int> values(1, 2, 3);
    constexpr int result = std::apply(sum_tuple, values);

    std::cout << "Tuple sum: " << result << '\n';
}
