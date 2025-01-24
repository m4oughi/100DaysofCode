#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    std::vector<int> to_insert = {25, 30};

    for (int elem : to_insert) {
        auto range = std::equal_range(numbers.begin(), numbers.end(), elem);
        numbers.insert(range.second, elem);
    }

    std::cout << "Updated numbers: ";
    for (int n : numbers) std::cout << n << " ";
    std::cout << "\n";

    return 0;
}
