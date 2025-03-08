#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {5, 10, 15, 20};

    std::cout << "Accessing elements with const iterators: ";
    for (auto it = dq.cbegin(); it != dq.cend(); ++it)
        std::cout << *it << " ";

    // Uncommenting the next line will cause a compilation error
    // *dq.cbegin() = 100;

    return 0;
}
