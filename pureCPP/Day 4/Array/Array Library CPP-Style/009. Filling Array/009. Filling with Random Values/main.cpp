#include <iostream>
#include <array>
#include <algorithm>  // For std::generate
#include <cstdlib>    // For std::rand
#include <ctime>      // For std::time

int main() {
    std::array<int, 5> arr;

    std::srand(static_cast<unsigned>(std::time(0)));  // Seed for randomness
    std::generate(arr.begin(), arr.end(), []() { return std::rand() % 100; });  // Fill with random values

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: (random values, e.g., 42 84 15 62 73)
    }
    std::cout << std::endl;

    return 0;
}