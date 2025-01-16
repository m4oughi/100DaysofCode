#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {4, 1, 8, 2};
    numbers.insert(5); // Insert an element

    for (int num : numbers) {
        std::cout << num << " "; // Elements will be in sorted order
    }
    return 0;
}
