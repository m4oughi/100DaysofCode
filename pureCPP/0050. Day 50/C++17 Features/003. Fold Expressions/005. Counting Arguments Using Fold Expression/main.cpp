#include <iostream>

template <typename... Args>
constexpr size_t countArgs(Args... args) {
    return sizeof...(args);
}

int main() {
    std::cout << "Number of arguments: " << countArgs(1, 2, 3, 4, 5) << '\n';
    return 0;
}
