#include <iostream>
#include <type_traits>

template <typename T>
using IsNotInt = std::negation<std::is_same<T, int>>;

int main() {
    std::cout << "IsNotInt<float>: " << IsNotInt<float>::value << "\n";
    std::cout << "IsNotInt<int>: " << IsNotInt<int>::value << "\n";
    return 0;
}
