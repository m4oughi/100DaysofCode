#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq; // Min-Heap

    pq.push(50);
    pq.push(20);
    pq.push(40);

    std::cout << "Top element after pushes: " << pq.top() << std::endl; // 20 (smallest)

    return 0;
}
