#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40};

    auto it = numbers.begin();
    numbers.push_back(50); // Adding an element invalidates the iterator

    // Using the invalidated iterator
    std::cout << *it << std::endl; // Undefined behavior

    return 0;
}
