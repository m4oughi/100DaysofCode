#include <iostream>
#include <array>

int main() {
    std::array<int, 5> customContainer = {10, 20, 30, 40, 50};

    std::cout << "Custom container elements: ";
    for (auto it = std::begin(customContainer); it != std::end(customContainer); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
