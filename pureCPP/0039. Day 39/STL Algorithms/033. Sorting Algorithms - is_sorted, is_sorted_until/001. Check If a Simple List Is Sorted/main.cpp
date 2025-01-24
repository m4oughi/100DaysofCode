#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    if (std::is_sorted(numbers.begin(), numbers.end())) {
        std::cout << "The list is sorted.\n";
    } else {
        std::cout << "The list is not sorted.\n";
    }
    return 0;
}
