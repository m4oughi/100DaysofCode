#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers(5);
    std::iota(numbers.begin(), numbers.end(), 1);

    std::cout << "Odd sequence: ";
    for (auto& num : numbers) {
        num = num * 2 - 1;
        std::cout << num << " ";
    }
    std::cout << "\n"; // Output: 1 3 5 7 9

    return 0;
}
