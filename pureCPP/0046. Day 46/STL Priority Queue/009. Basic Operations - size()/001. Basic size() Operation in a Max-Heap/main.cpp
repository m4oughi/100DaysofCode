#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq; // Max-Heap by default

    std::cout << "Initial size: " << pq.size() << std::endl;

    pq.push(10);
    pq.push(40);
    pq.push(30);

    std::cout << "Size after inserting 3 elements: " << pq.size() << std::endl;

    return 0;
}
