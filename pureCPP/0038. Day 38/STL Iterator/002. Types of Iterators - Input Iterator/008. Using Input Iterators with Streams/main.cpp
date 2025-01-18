#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

int main() {
    std::cout << "Enter numbers (end input with non-numeric value): ";
    
    std::istream_iterator<int> input(std::cin);
    std::istream_iterator<int> end;

    std::vector<int> numbers;
    std::copy(input, end, std::back_inserter(numbers));

    std::cout << "You entered: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
