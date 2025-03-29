#include <iostream>

template <typename T>
struct Wrapper {
    T value;
};

template <>
struct Wrapper<void> {
    [[no_unique_address]] struct Empty {};
};

int main() {
    std::cout << "Size of Wrapper<int>: " << sizeof(Wrapper<int>) << "\n";
    std::cout << "Size of Wrapper<void>: " << sizeof(Wrapper<void>) << "\n";
}
