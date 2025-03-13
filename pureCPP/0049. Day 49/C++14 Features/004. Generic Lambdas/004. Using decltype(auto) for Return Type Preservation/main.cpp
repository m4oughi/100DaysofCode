#include <iostream>

int main() {
    auto returnInput = [](auto&& x) -> decltype(auto) { return std::forward<decltype(x)>(x); };

    int value = 42;
    std::cout << "Returned Value: " << returnInput(value) << std::endl;

    return 0;
}
