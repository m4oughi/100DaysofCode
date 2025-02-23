#include <iostream>
#include <queue>
#include <vector>

int main() {
    auto cmp = [](int left, int right) { return left > right; }; // Min-Heap

    std::priority_queue<int, std::vector<int>, decltype(cmp)> pq(cmp);

    pq.push(30);
    pq.push(10);
    pq.push(20);

    std::cout << "Elements in ascending order:\n";
    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}
