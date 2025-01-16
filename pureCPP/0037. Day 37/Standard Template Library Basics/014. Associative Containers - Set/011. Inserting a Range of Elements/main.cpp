#include <iostream>
#include <set>
#include <vector>

int main() {
    std::set<int> numbers = {1, 2, 3};
    std::vector<int> more_numbers = {3, 4, 5};

    numbers.insert(more_numbers.begin(), more_numbers.end()); // Insert range

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
