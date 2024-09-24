#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;
    numbers.reserve(10);  // Pre-allocate memory for 10 elements

    for (int i = 0; i < 10; ++i) {
        numbers.push_back(i);  // Memory is already allocated, so no resizing is needed
    }

    // No need to manually free memory; vector takes care of it

    return 0;
}
