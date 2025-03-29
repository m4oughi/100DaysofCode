#include <iostream>
#include <ranges>
#include <vector>
#include <tuple>

template <std::ranges::range R>
auto enumerate(R&& range) {
    return std::views::zip(std::views::iota(0), std::forward<R>(range));
}

int main() {
    std::vector<std::string> words = {"Hello", "World", "C++20"};

    for (auto [index, word] : enumerate(words)) {
        std::cout << index << ": " << word << '\n';
    }
}
