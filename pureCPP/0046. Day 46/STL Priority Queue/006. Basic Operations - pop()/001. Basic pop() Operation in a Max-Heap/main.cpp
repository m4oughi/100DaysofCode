#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq; // Max-Heap by default

    pq.push(10);
    pq.push(40);
    pq.push(30);

    std::cout << "Popping elements:\n";
    while (!pq.empty()) {
        std::cout << pq.top() << " ";  // Print top element
        pq.pop();                      // Remove top element
    }

    return 0;
}
