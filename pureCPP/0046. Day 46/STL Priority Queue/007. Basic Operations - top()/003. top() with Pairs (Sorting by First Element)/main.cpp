#include <iostream>
#include <queue>

int main() {
    std::priority_queue<std::pair<int, int>> pq; // Max-Heap based on first element

    pq.push({3, 300});
    pq.push({1, 100});
    pq.push({2, 200});

    std::cout << "Top element: {" << pq.top().first << ", " << pq.top().second << "}" << std::endl;

    return 0;
}
