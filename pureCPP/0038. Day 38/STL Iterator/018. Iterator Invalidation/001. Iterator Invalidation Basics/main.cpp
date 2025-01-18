#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3};
    auto it = numbers.begin(); // Iterator points to the first element

    numbers.push_back(4); // Adding a new element invalidates iterators

    // Accessing the invalidated iterator leads to undefined behavior
    // Uncommenting the next line will cause issues:
    // std::cout << *it << std::endl;

    std::cout << "Vector after push_back: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
