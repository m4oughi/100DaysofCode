#include <iostream>
#include <queue>

void swapQueues(std::queue<int>& q1, std::queue<int>& q2) {
    std::swap(q1, q2);
}

int main() {
    std::queue<int> q1, q2;

    q1.push(5);
    q1.push(10);

    q2.push(50);
    q2.push(100);
    q2.push(150);

    std::cout << "Before swap: q1 size = " << q1.size() << ", q2 size = " << q2.size() << std::endl;

    swapQueues(q1, q2);

    std::cout << "After swap: q1 size = " << q1.size() << ", q2 size = " << q2.size() << std::endl;

    return 0;
}
