#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 6> arr = {1, 2, 3, 4, 5, 6};
    std::partition(arr.begin(), arr.end(), [](int n) { return n % 2 == 0; });  // Partition elements by even/odd

    std::cout << "Partitioned array: ";
    for (const int& n : arr) {
        std::cout << n << " ";  // Output could vary: e.g., 2 4 6 1 3 5
    }
    std::cout << std::endl;

    return 0;
}