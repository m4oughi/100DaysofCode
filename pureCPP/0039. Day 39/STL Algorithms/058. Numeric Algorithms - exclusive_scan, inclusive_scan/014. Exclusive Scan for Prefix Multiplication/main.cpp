#include <iostream>
#include <vector>
#include <numeric>
#include <functional>

int main() {
    std::vector<int> numbers = {2, 3, 4, 5};
    std::vector<int> exclusive_result(numbers.size());

    std::exclusive_scan(numbers.begin(), numbers.end(), exclusive_result.begin(), 1,
                       std::multiplies<>());

    std::cout << "Exclusive Scan (Running Product Excluding Current): ";
    for (int num : exclusive_result) {
        std::cout << num << " ";
    }
    // Output: 1 2 6 24

    return 0;
}
