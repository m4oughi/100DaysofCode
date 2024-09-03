#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 3> arr = {1, 2, 3};

    std::cout << "All permutations of the array: " << std::endl;
    do {
        for (const int& n : arr) {
            std::cout << n << " ";  // Output: 1 2 3, 1 3 2, 2 1 3, 2 3 1, 3 1 2, 3 2 1
        }
        std::cout << std::endl;
    } while (std::next_permutation(arr.begin(), arr.end()));  // Generating next permutation

    return 0;
}