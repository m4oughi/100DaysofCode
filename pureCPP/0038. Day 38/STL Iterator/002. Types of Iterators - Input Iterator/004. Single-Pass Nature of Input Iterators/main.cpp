#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::istream_iterator<int> it(numbers.begin(), numbers.end()); // Simulate input iterator

    // Single-pass demonstration
    std::cout << *it << " "; // Access first element
    ++it;                    // Move to next element
    std::cout << *it << " "; // Access next element

    // Cannot move back to the previous element
    // std::cout << *(--it); // Error: Input iterators do not support decrement

    return 0;
}
