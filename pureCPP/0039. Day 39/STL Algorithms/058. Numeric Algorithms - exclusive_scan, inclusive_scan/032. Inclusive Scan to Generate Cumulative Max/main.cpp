#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main() {
    std::vector<int> numbers = {3, 1, 4, 1, 5, 9, 2};
    std::vector<int> inclusive_result(numbers.size());

    std::inclusive_scan(numbers.begin(), numbers.end(), inclusive_result.begin(),
                        [](int a, int b) { return std::max(a, b); });

    std::cout << "Inclusive Scan (Running Maximum): ";
    for (int num : inclusive_result) {
        std::cout << num << " ";
    }
    // Output: 3 3 4 4 5 9 9

    return 0;
}
