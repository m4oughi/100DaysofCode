#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<int> exclusive_result(numbers.size());

    std::exclusive_scan(numbers.begin(), numbers.end(), exclusive_result.begin(), 0);

    std::cout << "Exclusive Scan (Running Total Excluding Current): ";
    for (int num : exclusive_result) {
        std::cout << num << " ";
    }
    // Output: 0 1 3 6 10

    return 0;
}
