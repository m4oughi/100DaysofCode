#include <iostream>
#include <queue>
#include <vector>

int main() {
    auto cmp = [](int left, int right) { return left > right; }; // Min-Heap

    std::priority_queue<int, std::vector<int>, decltype(cmp)> pq(cmp);

    pq.push(15);
    pq.push(5);
    pq.push(20);

    std::cout << "Popping elements:\n";
    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
