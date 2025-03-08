#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    dq.push_front(1);
    dq.push_front(2);
    dq.push_front(3);

    dq.push_back(4);
    dq.push_back(5);

    std::cout << "Deque elements: ";
    for (int num : dq) {
        std::cout << num << " ";
    }

    return 0;
}
