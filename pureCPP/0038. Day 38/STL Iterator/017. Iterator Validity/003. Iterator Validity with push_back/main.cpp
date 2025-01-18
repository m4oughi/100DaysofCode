#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3};
    std::vector<int>::iterator it = numbers.begin();

    numbers.push_back(4); // Adding elements can reallocate memory, invalidating iterators

    // Accessing the invalid iterator
    // Uncommenting the next line will lead to undefined behavior
    // std::cout << *it << std::endl;

    std::cout << "Vector after push_back: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
