#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {7, 3, 9, 1, 4};

    std::sort(numbers.begin(), numbers.end());

    std::cout << "Sorted numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
