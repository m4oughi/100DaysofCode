#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> numbers = {1, 2, 3, 4, 5};

    numbers.erase(3);  // Remove element 3

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
