#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6};
    std::vector<int> exclusive_result(numbers.size());

    std::exclusive_scan(numbers.begin(), numbers.end(), exclusive_result.begin(), 0,
        [&](int acc, int val) -> int {
            return acc + (val % 2 == 0 ? val : 0);
        });

    std::cout << "Exclusive Scan with Even Number Filtering: ";
    for (int num : exclusive_result) {
        std::cout << num << " ";
    }
    // Output: 0 0 2 2 6 6

    return 0;
}
