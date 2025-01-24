#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {5, 2, 8, 1, 3};

    std::sort(numbers.begin(), numbers.end(), std::greater<int>());

    std::cout << "Numbers sorted in descending order: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
