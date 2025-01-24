#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers(10, 0);
    std::iota(numbers.begin() + 3, numbers.begin() + 7, 5);

    std::cout << "Partial sequence: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n"; // Output: 0 0 0 5 6 7 8 0 0 0

    return 0;
}
