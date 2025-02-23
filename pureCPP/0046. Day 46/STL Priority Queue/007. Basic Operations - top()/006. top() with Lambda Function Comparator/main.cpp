#include <iostream>
#include <queue>
#include <vector>

int main() {
    auto cmp = [](int left, int right) { return left > right; }; // Min-Heap

    std::priority_queue<int, std::vector<int>, decltype(cmp)> pq(cmp);

    pq.push(15);
    pq.push(5);
    pq.push(20);

    std::cout << "Top element: " << pq.top() << std::endl;

    return 0;
}
