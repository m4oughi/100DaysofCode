#include <iostream>
#include <array>

int main() {
    std::array<int, 4> arr = {10, 20, 30, 40};

    for (const int num : arr) {
        std::cout << num << " ";
    }

    return 0;
}
