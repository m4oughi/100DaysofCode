#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {10, 20, 30, 40};

    std::cout << "Forward Traversal: ";
    for (auto it = dq.begin(); it != dq.end(); ++it)
        std::cout << *it << " ";

    std::cout << "\nReverse Traversal: ";
    for (auto rit = dq.rbegin(); rit != dq.rend(); ++rit)
        std::cout << *rit << " ";

    return 0;
}
