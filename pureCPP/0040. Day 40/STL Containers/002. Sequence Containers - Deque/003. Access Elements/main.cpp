#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {10, 20, 30, 40};

    // Access using []
    dq[1] = 25;

    // Access using .at()
    dq.at(2) = 35;

    // Access using iterators
    for (auto it = dq.begin(); it != dq.end(); ++it) {
        *it += 1;
    }

    for (int i : dq) std::cout << i << " ";

    return 0;
}
