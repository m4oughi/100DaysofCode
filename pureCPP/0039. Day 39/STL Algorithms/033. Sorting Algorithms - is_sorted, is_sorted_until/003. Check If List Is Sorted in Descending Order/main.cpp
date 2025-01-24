#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {9, 7, 5, 3, 1};

    if (std::is_sorted(numbers.begin(), numbers.end(), std::greater<int>())) {
        std::cout << "The list is sorted in descending order.\n";
    } else {
        std::cout << "The list is not sorted in descending order.\n";
    }
    return 0;
}
