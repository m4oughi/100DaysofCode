#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;

    numbers.reserve(1000);  // Pre-allocate memory to improve performance

    for (int i = 0; i < 1000; ++i) {
        numbers.insert(numbers.begin(), i);  // Insert at the beginning
    }

    std::cout << "Size after inserting 1000 elements: " << numbers.size() << std::endl;
    std::cout << "First element: " << numbers.front() << std::endl;

    return 0;
}
