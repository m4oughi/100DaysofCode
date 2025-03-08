#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(30);

    std::cout << "Deque elements: ";
    for (int num : dq) {
        std::cout << num << " ";
    }

    return 0;
}
