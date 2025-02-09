#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30, 40};

    auto it = numbers.find(30); // Get iterator to element 30
    if (it != numbers.end()) {
        numbers.erase(it); // Remove using iterator
    }

    std::cout << "Set after removing 30: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
