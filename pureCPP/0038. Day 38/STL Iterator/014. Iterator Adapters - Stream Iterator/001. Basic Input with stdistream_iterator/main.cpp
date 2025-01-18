#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::cout << "Enter integers (end input with a non-integer): ";
    std::vector<int> numbers(std::istream_iterator<int>(std::cin), std::istream_iterator<int>());

    std::cout << "You entered: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
