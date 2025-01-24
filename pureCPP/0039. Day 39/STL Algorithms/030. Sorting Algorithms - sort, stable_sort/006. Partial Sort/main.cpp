#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {7, 2, 5, 3, 9, 1};

    std::partial_sort(numbers.begin(), numbers.begin() + 3, numbers.end());

    std::cout << "Partially sorted (top 3 smallest): ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
