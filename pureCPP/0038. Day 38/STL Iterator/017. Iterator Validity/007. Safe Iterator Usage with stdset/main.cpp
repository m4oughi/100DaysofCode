#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30, 40};

    auto it = numbers.find(20); // Points to element 20

    numbers.erase(30); // Removing a different element does not affect the iterator

    std::cout << "Element pointed by iterator: " << *it << std::endl;

    std::cout << "Set after removal: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
