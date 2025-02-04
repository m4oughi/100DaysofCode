#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq;

    // Check if the priority queue is empty
    if (pq.empty()) {
        std::cout << "Priority Queue is empty." << std::endl;  // Output: Priority Queue is empty.
    }

    // Pushing elements into the priority queue
    pq.push(10);
    pq.push(20);

    // Check again after adding elements
    if (!pq.empty()) {
        std::cout << "Priority Queue is not empty." << std::endl;  // Output: Priority Queue is not empty.
    }

    return 0;
}
