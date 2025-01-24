#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers(6);
    std::iota(numbers.begin(), numbers.end(), -3);

    std::cout << "Sequence with negative start: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n"; // Output: -3 -2 -1 0 1 2

    return 0;
}
