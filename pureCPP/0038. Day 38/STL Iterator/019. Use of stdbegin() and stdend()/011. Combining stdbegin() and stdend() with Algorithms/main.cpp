#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {50, 10, 40, 20, 30};

    std::sort(std::begin(numbers), std::end(numbers)); // Sort in ascending order

    std::cout << "Sorted vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
