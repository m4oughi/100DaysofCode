#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq;  // Max-heap by default

    pq.push(10);
    pq.push(30);
    pq.push(20);

    std::cout << "Top element: " << pq.top() << std::endl; // 30 (largest element)

    pq.pop();
    std::cout << "After pop, top element: " << pq.top() << std::endl; // 20

    return 0;
}
