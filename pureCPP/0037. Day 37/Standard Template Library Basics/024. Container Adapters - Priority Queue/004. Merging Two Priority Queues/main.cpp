#include <iostream>
#include <queue>

void mergeQueues(std::priority_queue<int>& pq1, std::priority_queue<int>& pq2) {
    while (!pq2.empty()) {
        pq1.push(pq2.top());
        pq2.pop();
    }
}

int main() {
    std::priority_queue<int> pq1, pq2;

    pq1.push(10);
    pq1.push(5);
    pq1.push(15);

    pq2.push(20);
    pq2.push(1);

    mergeQueues(pq1, pq2);

    std::cout << "Merged priority queue: ";
    while (!pq1.empty()) {
        std::cout << pq1.top() << " ";
        pq1.pop();
    }
    std::cout << "\n";

    return 0;
}
