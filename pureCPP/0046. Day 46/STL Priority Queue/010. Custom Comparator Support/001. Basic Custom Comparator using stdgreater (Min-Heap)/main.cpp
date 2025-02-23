#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq; // Min-Heap

    pq.push(50);
    pq.push(20);
    pq.push(40);

    std::cout << "Elements in ascending order:\n";
    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}
