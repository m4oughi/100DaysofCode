#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    minHeap.push(10);
    minHeap.push(5);
    minHeap.push(20);
    minHeap.push(15);

    std::cout << "Top element (min): " << minHeap.top() << "\n"; // 5 (smallest element)

    return 0;
}
