#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 3, 8, 7, 4, 9, 6};

    std::nth_element(numbers.begin(), numbers.begin() + 3, numbers.end(), [](int a, int b) {
        return (a % 2) < (b % 2); // Odd numbers before even numbers
    });

    std::cout << "Numbers reordered with nth odd/even separation: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
