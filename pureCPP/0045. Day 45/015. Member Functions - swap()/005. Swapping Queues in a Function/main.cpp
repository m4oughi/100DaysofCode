#include <iostream>
#include <queue>

void swapQueues(std::queue<int>& q1, std::queue<int>& q2) {
    q1.swap(q2);
}

int main() {
    std::queue<int> q1, q2;

    q1.push(1);
    q1.push(2);

    q2.push(100);
    q2.push(200);

    std::cout << "Before function swap: q1 front = " << q1.front() << ", q2 front = " << q2.front() << std::endl;

    swapQueues(q1, q2);  // Swapping using a function

    std::cout << "After function swap: q1 front = " << q1.front() << ", q2 front = " << q2.front() << std::endl;

    return 0;
}
