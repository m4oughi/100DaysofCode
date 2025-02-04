#include <iostream>
#include <array>
#include <algorithm>

bool customComparator(int a, int b) {
    return a > b; // Sort in descending order
}

int main() {
    std::array<int, 5> arr = {1, 4, 3, 2, 5};

    std::sort(arr.begin(), arr.end(), customComparator);

    for (int i : arr) {
        std::cout << i << " ";
    }

    return 0;
}
