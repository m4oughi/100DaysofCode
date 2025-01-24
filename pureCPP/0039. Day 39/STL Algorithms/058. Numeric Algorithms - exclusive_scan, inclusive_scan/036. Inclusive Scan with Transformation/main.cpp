#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<int> inclusive_result(numbers.size());

    std::inclusive_scan(numbers.begin(), numbers.end(), inclusive_result.begin(),
        [&](int acc, int val) -> int {
            return acc + (val * val); // Accumulate squares
        });

    std::cout << "Inclusive Scan with Transformation (Squares): ";
    for (int num : inclusive_result) {
        std::cout << num << " ";
    }
    // Output: 1 5 14 30 55

    return 0;
}
