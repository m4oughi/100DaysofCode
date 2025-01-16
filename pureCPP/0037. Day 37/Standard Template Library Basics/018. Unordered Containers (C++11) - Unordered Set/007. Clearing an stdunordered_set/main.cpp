#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> numbers = {1, 2, 3};

    numbers.clear();  // Clear all elements

    std::cout << "Size after clearing: " << numbers.size() << "\n";
    return 0;
}
