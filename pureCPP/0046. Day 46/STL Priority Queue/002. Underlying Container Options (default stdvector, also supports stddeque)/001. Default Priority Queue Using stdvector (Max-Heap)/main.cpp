#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq;  // Uses std::vector by default (Max-Heap)

    pq.push(40);
    pq.push(10);
    pq.push(30);

    std::cout << "Top element: " << pq.top() << std::endl; // 40 (largest element)

    pq.pop();
    std::cout << "After pop, top element: " << pq.top() << std::endl; // 30

    return 0;
}
