#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 3, 4, 5};

    // Insert in the middle, causing fragmentation
    dq.insert(dq.begin() + 2, 99);

    std::cout << "Deque elements: ";
    for (int num : dq) {
        std::cout << num << " ";
    }

    return 0;
}
