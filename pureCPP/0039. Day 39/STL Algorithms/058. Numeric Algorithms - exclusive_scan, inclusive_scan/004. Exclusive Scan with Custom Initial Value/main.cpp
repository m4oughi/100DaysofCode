#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers = {5, 10, 15};
    std::vector<int> exclusive_result(numbers.size());

    std::exclusive_scan(numbers.begin(), numbers.end(), exclusive_result.begin(), 100);

    std::cout << "Exclusive Scan with Initial Value 100: ";
    for (int num : exclusive_result) {
        std::cout << num << " ";
    }
    // Output: 100 105 115

    return 0;
}
