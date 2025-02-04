#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq;

    if (pq.empty()) {
        std::cout << "Priority queue is empty!\n";
    }

    pq.push(42);

    if (!pq.empty()) {
        std::cout << "Priority queue is not empty!\n";
    }

    return 0;
}
