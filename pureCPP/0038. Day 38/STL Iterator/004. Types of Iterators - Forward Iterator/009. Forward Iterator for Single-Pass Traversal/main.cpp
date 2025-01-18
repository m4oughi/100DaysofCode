#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> numbers = {10, 20, 30};

    auto it = numbers.begin();
    std::cout << *it << " "; // Access first element
    ++it;                    // Move to next element
    std::cout << *it << " "; // Access next element

    // Cannot move back to the previous element
    // std::cout << *(--it); // Error: Forward iterators do not support decrement

    return 0;
}
