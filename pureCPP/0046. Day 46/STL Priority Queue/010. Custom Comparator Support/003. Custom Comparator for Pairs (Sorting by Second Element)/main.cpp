#include <iostream>
#include <queue>
#include <vector>

struct ComparePairs {
    bool operator()(const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.second > b.second; // Sorting by second element (Min-Heap)
    }
};

int main() {
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, ComparePairs> pq;

    pq.push({1, 30});
    pq.push({2, 20});
    pq.push({3, 50});

    std::cout << "Pairs sorted by second element:\n";
    while (!pq.empty()) {
        std::cout << "(" << pq.top().first << ", " << pq.top().second << ") ";
        pq.pop();
    }
    return 0;
}
