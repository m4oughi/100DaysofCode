#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;
    int maxSize = 3;

    for (int i = 1; i <= 5; ++i) {
        dq.push_back(i);
        if (dq.size() > maxSize) dq.pop_front(); // Remove front to maintain size
    }

    std::cout << "Fixed-size queue: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
