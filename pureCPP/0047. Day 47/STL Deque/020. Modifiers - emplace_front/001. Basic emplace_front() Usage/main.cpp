#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    dq.emplace_front(10);
    dq.emplace_front(20);
    dq.emplace_front(30);

    std::cout << "Deque after emplace_front: ";
    for (int num : dq) std::cout << num << " ";
    std::cout << "\n";

    return 0;
}
