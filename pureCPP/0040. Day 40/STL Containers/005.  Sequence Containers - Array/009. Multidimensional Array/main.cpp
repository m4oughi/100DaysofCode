#include <iostream>
#include <array>

int main() {
    std::array<std::array<int, 3>, 2> arr = {{{1, 2, 3}, {4, 5, 6}}};

    for (const auto& row : arr) {
        for (int i : row) {
            std::cout << i << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
