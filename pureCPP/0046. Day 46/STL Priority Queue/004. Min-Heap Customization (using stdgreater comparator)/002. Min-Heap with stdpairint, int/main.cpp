#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<>> pq;

    pq.push({3, 300});
    pq.push({1, 100});
    pq.push({2, 200});

    while (!pq.empty()) {
        std::cout << "Top element: {" << pq.top().first << ", " << pq.top().second << "}\n";
        pq.pop();
    }

    return 0;
}
