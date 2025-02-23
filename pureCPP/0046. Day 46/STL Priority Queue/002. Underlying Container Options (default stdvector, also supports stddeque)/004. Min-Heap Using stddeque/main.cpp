#include <iostream>
#include <queue>
#include <deque>

int main() {
    std::priority_queue<int, std::deque<int>, std::greater<int>> pq; // Min-Heap with deque

    pq.push(8);
    pq.push(3);
    pq.push(12);

    std::cout << "Top element: " << pq.top() << std::endl; // 3 (smallest element)

    return 0;
}
