#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> numbers(5); // Empty vector with 5 elements

    std::vector<int>::iterator it = numbers.begin();
    for (int i = 1; i <= 5; ++i) {
        *it = i; // Writing values using the iterator
        ++it;
    }

    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
