#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {1, 2, 3, 4, 5};
    auto it = numbers.find(3); // Points to element 3

    numbers.erase(2); // Removing a different element does not affect the iterator

    std::cout << "Element pointed by iterator: " << *it << std::endl;

    return 0;
}
