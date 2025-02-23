#include <iostream>
#include <queue>
#include <vector>

int main() {
    auto cmp = [](int left, int right) { return left < right; }; // Max-Heap

    std::priority_queue<int, std::vector<int>, decltype(cmp)> pq(cmp);

    pq.push(15);
    pq.push(5);
    pq.push(20);

    while (!pq.empty()) {
        std::cout << "Top element: " << pq.top() << std::endl;
        pq.pop();
    }

    return 0;
}
