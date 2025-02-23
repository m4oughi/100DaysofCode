#include <iostream>
#include <queue>
#include <vector>
#include <functional>

int main() {
    auto cmp = [](int left, int right) { return left > right; }; // Min-Heap
    std::priority_queue<int, std::vector<int>, decltype(cmp)> pq(cmp);

    pq.push(10);
    pq.push(30);
    pq.push(20);

    while (!pq.empty()) {
        std::cout << "Top element: " << pq.top() << std::endl;
        pq.pop();
    }

    return 0;
}
