#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers(5);
    std::iota(numbers.begin(), numbers.end(), 1);

    std::cout << "Sequential numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n"; // Output: 1 2 3 4 5

    return 0;
}
