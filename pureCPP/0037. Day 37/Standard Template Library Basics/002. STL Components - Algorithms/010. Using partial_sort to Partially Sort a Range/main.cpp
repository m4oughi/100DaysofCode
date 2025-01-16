#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 2, 30, 5, 4};
    std::partial_sort(numbers.begin(), numbers.begin() + 3, numbers.end());

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
