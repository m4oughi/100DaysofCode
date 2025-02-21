#include <iostream>
#include <queue>

int main() {
    std::queue<int> q1, q2;
    
    q1.push(10);
    q1.push(20);
    q2.push(100);
    q2.push(200);

    std::cout << "Before swap: q1 front = " << q1.front() << ", q2 front = " << q2.front() << std::endl;

    q1.swap(q2);  // Swap queues

    std::cout << "After swap: q1 front = " << q1.front() << ", q2 front = " << q2.front() << std::endl;

    return 0;
}
