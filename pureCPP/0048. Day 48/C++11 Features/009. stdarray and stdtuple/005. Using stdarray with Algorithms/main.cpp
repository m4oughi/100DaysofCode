#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 5> arr = {3, 1, 4, 1, 5};

    std::sort(arr.begin(), arr.end());

    for (int num : arr) {
        std::cout << num << " ";
    }

    return 0;
}
