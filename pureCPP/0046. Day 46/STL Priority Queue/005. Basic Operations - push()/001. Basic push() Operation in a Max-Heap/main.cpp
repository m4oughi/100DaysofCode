#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq; // Max-Heap by default

    pq.push(10);
    pq.push(40);
    pq.push(30);

    std::cout << "Top element after pushes: " << pq.top() << std::endl; // 40

    return 0;
}
