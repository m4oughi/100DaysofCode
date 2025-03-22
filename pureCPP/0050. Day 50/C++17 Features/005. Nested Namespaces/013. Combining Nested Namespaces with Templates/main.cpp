#include <iostream>

namespace Utils::Algorithms {
    template <typename T>
    T square(T value) {
        return value * value;
    }
}

int main() {
    std::cout << "Square of 5: " << Utils::Algorithms::square(5) << '\n';
    return 0;
}
