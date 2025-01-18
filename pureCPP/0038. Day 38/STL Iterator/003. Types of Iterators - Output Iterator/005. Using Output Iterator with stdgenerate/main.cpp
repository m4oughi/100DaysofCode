#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main() {
    std::vector<int> numbers;

    // Generate 10 sequential numbers starting from 1
    int value = 1;
    std::generate_n(std::back_inserter(numbers), 10, [&]() { return value++; });

    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
