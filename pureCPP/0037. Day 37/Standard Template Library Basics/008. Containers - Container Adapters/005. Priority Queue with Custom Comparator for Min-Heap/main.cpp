#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
    minHeap.push(10);
    minHeap.push(20);
    minHeap.push(5);

    while (!minHeap.empty()) {
        std::cout << minHeap.top() << " "; // Outputs the smallest element
        minHeap.pop();
    }
    return 0;
}
