#include <iostream>
#include <array>

int main() {
    std::array<float, 4> values = {1.2f, 3.4f, 5.6f, 7.8f};

    for (auto value : values) { // `auto` deduces `float`
        std::cout << value << " ";
    }

    return 0;
}
