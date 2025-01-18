#include <iostream>
#include <deque>

int main() {
    std::deque<int> numbers = {1, 2, 3};
    auto it = numbers.begin(); // Points to the first element

    numbers.push_back(4);  // May invalidate iterators
    numbers.push_front(0); // May also invalidate iterators

    // Accessing the invalid iterator will cause undefined behavior
    // Uncommenting the next line will cause issues:
    // std::cout << *it << std::endl;

    std::cout << "Deque after modifications: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
