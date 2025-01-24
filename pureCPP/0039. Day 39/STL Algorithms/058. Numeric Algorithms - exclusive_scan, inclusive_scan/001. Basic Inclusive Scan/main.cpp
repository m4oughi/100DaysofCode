#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<int> inclusive_result(numbers.size());

    std::inclusive_scan(numbers.begin(), numbers.end(), inclusive_result.begin());

    std::cout << "Inclusive Scan (Cumulative Sum): ";
    for (int num : inclusive_result) {
        std::cout << num << " ";
    }
    // Output: 1 3 6 10 15

    return 0;
}
