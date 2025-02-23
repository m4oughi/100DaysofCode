#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq; // Min-Heap

    pq.push(100);
    pq.push(20);
    pq.push(50);

    std::cout << "Processing Min-Heap elements:\n";
    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop();
    }

    std::cout << "\nIs priority queue empty? " << (pq.empty() ? "Yes" : "No") << std::endl;

    return 0;
}
