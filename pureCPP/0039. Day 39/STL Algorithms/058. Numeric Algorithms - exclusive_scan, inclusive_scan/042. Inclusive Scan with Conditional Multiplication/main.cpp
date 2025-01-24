#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers = {2, 3, 0, 4, 5};
    std::vector<int> inclusive_result(numbers.size());

    std::inclusive_scan(numbers.begin(), numbers.end(), inclusive_result.begin(),
        [&](int acc, int val) -> int {
            if (val == 0) return acc;
            return acc * val;
        }, 
        1 // Initial value for the first element
    );

    std::cout << "Inclusive Scan with Conditional Multiplication: ";
    for (int num : inclusive_result) {
        std::cout << num << " ";
    }
    // Output: 2 6 6 24 120

    return 0;
}
