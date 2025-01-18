#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    auto it = numbers.begin();
    std::advance(it, 2); // Move to the third element

    numbers.erase(numbers.begin() + 1); // Removing the second element invalidates iterators after it

    // Use std::distance to avoid direct access of invalidated iterator
    std::cout << "Distance from begin: " << std::distance(numbers.begin(), it) << std::endl;

    return 0;
}
