#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> numbers = {1, 2, 3};
    numbers.insert(4); // Insert an element

    for (int num : numbers) {
        std::cout << num << " "; // Output may not be sorted
    }
    return 0;
}
