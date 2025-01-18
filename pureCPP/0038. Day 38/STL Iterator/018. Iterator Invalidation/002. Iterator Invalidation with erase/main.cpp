#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    auto it = numbers.begin() + 2; // Points to element 3

    numbers.erase(numbers.begin()); // Removes the first element

    // Accessing the invalid iterator leads to undefined behavior
    // Uncommenting the next line will cause issues:
    // std::cout << *it << std::endl;

    std::cout << "Vector after erase: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
