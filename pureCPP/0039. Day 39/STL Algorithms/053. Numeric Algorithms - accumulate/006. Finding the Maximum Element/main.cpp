#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers = {3, 1, 4, 1, 5, 9};
    int max_value = std::accumulate(numbers.begin(), numbers.end(), INT_MIN, 
        [](int acc, int val) {
            return std::max(acc, val);
        });

    std::cout << "Maximum value: " << max_value << "\n"; // Output: 9
    return 0;
}
