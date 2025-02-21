#include <iostream>
#include <queue>
#include <list>

int main() {
    std::queue<int, std::deque<int>> q1;
    std::queue<int, std::deque<int>> q2;

    q1.push(1);
    q1.push(2);
    q1.push(3);

    q2.push(10);
    q2.push(20);
    q2.push(30);

    std::cout << "Before swap: q1 front = " << q1.front() << ", q2 front = " << q2.front() << std::endl;

    q1.swap(q2);  // Works since both queues use std::deque

    std::cout << "After swap: q1 front = " << q1.front() << ", q2 front = " << q2.front() << std::endl;

    return 0;
}
