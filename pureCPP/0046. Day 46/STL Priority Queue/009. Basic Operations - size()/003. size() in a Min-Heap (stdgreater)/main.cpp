#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq; // Min-Heap

    pq.push(100);
    pq.push(20);
    pq.push(50);

    std::cout << "Current size: " << pq.size() << std::endl;

    while (!pq.empty()) {
        std::cout << "Processing element: " << pq.top() << ", Size: " << pq.size() << std::endl;
        pq.pop();
    }

    return 0;
}
