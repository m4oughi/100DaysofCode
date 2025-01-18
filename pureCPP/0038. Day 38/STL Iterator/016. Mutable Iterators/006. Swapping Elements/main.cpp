#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    for (std::vector<int>::iterator it = numbers.begin(); it + 1 != numbers.end(); it += 2) {
        std::iter_swap(it, it + 1); // Swap adjacent elements
    }

    std::cout << "Swapped vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
