#include <iostream>

int main() {
    int numbers[] = {5, 10, 15, 20, 25};

    for (auto it = std::begin(numbers); it != std::end(numbers); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
