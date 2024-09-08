#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;
    numbers.reserve(5); // Pre-allocate memory for 5 elements

    for (int i = 1; i <= 5; ++i) {
        numbers.push_back(i * 10);
        std::cout << "Capacity after push_back " << i << ": " << numbers.capacity() << std::endl;
    }

    std::cout << "Elements in the vector:" << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
