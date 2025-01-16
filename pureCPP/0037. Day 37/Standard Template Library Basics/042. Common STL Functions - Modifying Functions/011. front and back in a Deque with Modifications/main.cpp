#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 3, 4, 5};

    dq.front() *= 10; // Modify first element
    dq.back() += 100; // Modify last element

    std::cout << "Modified deque elements:\n";
    for (int val : dq) {
        std::cout << val << " ";
    }
    std::cout << "\n";

    return 0;
}
