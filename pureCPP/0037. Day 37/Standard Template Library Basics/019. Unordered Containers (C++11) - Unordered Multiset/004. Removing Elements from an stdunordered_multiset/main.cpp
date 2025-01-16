#include <iostream>
#include <unordered_multiset>

int main() {
    std::unordered_multiset<int> numbers = {1, 2, 3, 3, 4, 5};

    numbers.erase(3);  // Remove all occurrences of 3

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
