#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    for (int i = 1; i <= 5; ++i) {
        if (dq.empty() || i < dq.front()) {
            dq.push_front(i);
        } else {
            dq.push_back(i);
        }
    }

    std::cout << "Sorted deque elements: ";
    for (int num : dq) {
        std::cout << num << " ";
    }

    return 0;
}
