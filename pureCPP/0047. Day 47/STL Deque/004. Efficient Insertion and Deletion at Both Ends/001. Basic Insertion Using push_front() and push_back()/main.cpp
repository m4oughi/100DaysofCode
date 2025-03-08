#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);
    dq.push_front(1);

    std::cout << "Deque elements: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
