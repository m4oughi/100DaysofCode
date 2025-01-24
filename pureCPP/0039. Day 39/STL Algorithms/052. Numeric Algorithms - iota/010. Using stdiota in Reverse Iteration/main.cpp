#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers(5);
    std::iota(numbers.rbegin(), numbers.rend(), 1);

    std::cout << "Descending sequence: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n"; // Output: 5 4 3 2 1

    return 0;
}
