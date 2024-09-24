#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 4> arr = {1, 2, 3, 4};
    std::array<int, 4> result;

    std::transform(arr.begin(), arr.end(), result.begin(), [](int n) { return n * n; });  // Squaring each element

    std::cout << "Squared array: ";
    for (const int& n : result) {
        std::cout << n << " ";  // Output: 1 4 9 16
    }
    std::cout << std::endl;


    return 0;
}