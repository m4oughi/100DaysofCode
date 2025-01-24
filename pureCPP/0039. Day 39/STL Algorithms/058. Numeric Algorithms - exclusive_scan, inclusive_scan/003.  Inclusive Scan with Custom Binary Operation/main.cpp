#include <iostream>
#include <vector>
#include <numeric>
#include <functional>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4};
    std::vector<int> inclusive_result(numbers.size());

    std::inclusive_scan(numbers.begin(), numbers.end(), inclusive_result.begin(), std::multiplies<>());

    std::cout << "Inclusive Scan (Cumulative Product): ";
    for (int num : inclusive_result) {
        std::cout << num << " ";
    }
    // Output: 1 2 6 24

    return 0;
}
