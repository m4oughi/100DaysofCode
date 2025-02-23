#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq; // Max-Heap by default

    std::cout << "Is priority queue empty? " << (pq.empty() ? "Yes" : "No") << std::endl;

    pq.push(10);
    pq.push(40);
    pq.push(30);

    std::cout << "Is priority queue empty after adding elements? " << (pq.empty() ? "Yes" : "No") << std::endl;

    return 0;
}
