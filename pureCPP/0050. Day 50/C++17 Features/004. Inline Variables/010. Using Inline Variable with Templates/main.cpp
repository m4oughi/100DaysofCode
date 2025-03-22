#include <iostream>

template <typename T>
struct Identity {
    static inline T value = T{};
};

int main() {
    std::cout << "Default int: " << Identity<int>::value << '\n';
    std::cout << "Default double: " << Identity<double>::value << '\n';
    return 0;
}
