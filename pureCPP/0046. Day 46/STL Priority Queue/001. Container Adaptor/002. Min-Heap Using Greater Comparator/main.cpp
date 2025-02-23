#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq; // Min-Heap

    pq.push(10);
    pq.push(30);
    pq.push(20);

    std::cout << "Top element: " << pq.top() << std::endl; // 10 (smallest element)

    pq.pop();
    std::cout << "After pop, top element: " << pq.top() << std::endl; // 20

    return 0;
}
