#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};

    for (int num : arr) {
        std::cout << num << " ";
    }

    return 0;
}
