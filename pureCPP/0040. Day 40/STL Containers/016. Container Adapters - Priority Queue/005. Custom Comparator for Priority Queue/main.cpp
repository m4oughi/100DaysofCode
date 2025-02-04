#include <iostream>
#include <queue>
#include <vector>

struct Compare {
    bool operator()(int a, int b) {
        return a > b; // Min-Heap
    }
};

int main() {
    std::priority_queue<int, std::vector<int>, Compare> pq;

    pq.push(10);
    pq.push(5);
    pq.push(20);

    std::cout << "Top element: " << pq.top() << "\n"; // 5 (smallest)

    return 0;
}
