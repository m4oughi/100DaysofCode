#include <iostream>
#include <queue>
#include <vector>

int main() {
    // Min-heap using a custom comparator
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

    pq.push(10);
    pq.push(5);
    pq.push(20);

    std::cout << "Top element in min-heap: " << pq.top() << "\n"; // Smallest element

    return 0;
}
