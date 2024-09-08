#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

int main() {
    const size_t large_size = 1000000;
    std::vector<int> numbers;
    numbers.reserve(large_size);  // Reserve memory to avoid multiple reallocations

    // Fill the vector with random numbers
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 100);

    for (size_t i = 0; i < large_size; ++i) {
        numbers.push_back(dis(gen));
    }

    // Sort the vector
    std::sort(numbers.begin(), numbers.end());

    // Find an element
    auto it = std::find(numbers.begin(), numbers.end(), 50);
    if (it != numbers.end()) {
        std::cout << "Found 50 at position: " << std::distance(numbers.begin(), it) << std::endl;
    } else {
        std::cout << "50 not found." << std::endl;
    }

    return 0;
}
