#include <iostream>
#include <queue>

struct Compare {
    bool operator()(const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.second < b.second; // Max-Heap based on second element
    }
};

int main() {
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, Compare> pq;

    pq.push({1, 50});
    pq.push({2, 20});
    pq.push({3, 40});

    std::cout << "Top element: {" << pq.top().first << ", " << pq.top().second << "}" << std::endl;

    return 0;
}
