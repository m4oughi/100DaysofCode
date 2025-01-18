#include <iostream>
#include <vector>

int main() {
    const std::vector<int> numbers = {1, 2, 3, 4, 5};

    std::cout << "Using range-based loop for constant container: ";
    for (const int& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
