#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers = {0, 5, 0, 10, 15};
    std::vector<int> exclusive_result(numbers.size());

    std::exclusive_scan(numbers.begin(), numbers.end(), exclusive_result.begin(), 0,
        [&](int acc, int val) -> int {
            return acc + (val != 0 ? val : 0);
        });

    std::cout << "Exclusive Scan with Skipping Zeros: ";
    for (int num : exclusive_result) {
        std::cout << num << " ";
    }
    // Output: 0 0 5 5 15

    return 0;
}
