#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    if (dq.empty()) {
        std::cout << "Deque is empty\n";
    } else {
        std::cout << "Deque is not empty\n";
    }

    dq.push_back(10);
    if (!dq.empty()) {
        std::cout << "Deque is no longer empty\n";
    }

    return 0;
}
