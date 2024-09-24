#include <array>
#include <numeric>  // For std::accumulate
#include <iostream>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    int sum = std::accumulate(arr.begin(), arr.end(), 0);  // Calculating the sum of all elements

    std::cout << "Sum of elements: " << sum << std::endl;  // Output: Sum of elements: 15
    return 0;
}
