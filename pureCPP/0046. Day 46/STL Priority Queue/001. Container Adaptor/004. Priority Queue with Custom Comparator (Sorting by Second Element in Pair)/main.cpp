#include <iostream>
#include <queue>
#include <vector>

struct CompareSecond {
    bool operator()(const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.second > b.second; // Min-Heap based on second element
    }
};

int main() {
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, CompareSecond> pq;

    pq.push({1, 100});
    pq.push({3, 50});
    pq.push({2, 200});

    while (!pq.empty()) {
        std::cout << "Top element: {" << pq.top().first << ", " << pq.top().second << "}\n";
        pq.pop();
    }

    return 0;
}
