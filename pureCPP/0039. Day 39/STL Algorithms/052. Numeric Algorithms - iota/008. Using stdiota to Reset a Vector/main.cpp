#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    std::iota(numbers.begin(), numbers.end(), 100);

    std::cout << "Reset sequence: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n"; // Output: 100 101 102 103 104

    return 0;
}
