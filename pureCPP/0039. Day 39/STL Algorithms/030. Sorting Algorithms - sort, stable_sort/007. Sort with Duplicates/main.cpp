#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {4, 2, 2, 8, 5, 2, 1, 8};

    std::sort(numbers.begin(), numbers.end());

    std::cout << "Sorted with duplicates: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
