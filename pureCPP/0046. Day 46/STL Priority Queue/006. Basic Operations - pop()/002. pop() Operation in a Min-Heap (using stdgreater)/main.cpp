#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq; // Min-Heap

    pq.push(50);
    pq.push(20);
    pq.push(40);

    std::cout << "Popping elements from Min-Heap:\n";
    while (!pq.empty()) {
        std::cout << pq.top() << " ";  // Print top element
        pq.pop();                      // Remove top element
    }

    return 0;
}
