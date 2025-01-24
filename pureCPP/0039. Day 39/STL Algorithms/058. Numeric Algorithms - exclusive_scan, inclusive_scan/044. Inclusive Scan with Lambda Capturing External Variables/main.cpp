#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<int> inclusive_result(numbers.size());
    int external_multiplier = 2;

    std::inclusive_scan(numbers.begin(), numbers.end(), inclusive_result.begin(),
        [&](int acc, int val) -> int {
            return acc + (val * external_multiplier);
        }
    );

    std::cout << "Inclusive Scan with External Multiplier: ";
    for (int num : inclusive_result) {
        std::cout << num << " ";
    }
    // Output: 2 6 12 20 30

    return 0;
}
