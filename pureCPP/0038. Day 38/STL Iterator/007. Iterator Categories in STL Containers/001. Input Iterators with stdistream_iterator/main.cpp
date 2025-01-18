#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::cout << "Enter numbers (end with non-numeric input): ";
    std::vector<int> numbers((std::istream_iterator<int>(std::cin)), std::istream_iterator<int>());

    std::cout << "You entered: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
