#include <iostream>
#include <deque>

int main() {
    std::deque<int> numbers = {1, 2, 3, 4, 5};

    auto it = numbers.begin(); // Points to the first element

    numbers.push_front(0); // May invalidate iterators

    // Accessing invalidated iterator leads to undefined behavior
    // Uncommenting the next line will cause issues
    // std::cout << *it << std::endl;

    std::cout << "Deque after push_front: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
