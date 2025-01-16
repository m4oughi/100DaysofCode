#include <iostream>
#include <queue>
#include <utility>

int main() {
    std::priority_queue<std::pair<int, std::string>> pq;

    pq.push({2, "Low Priority"});
    pq.push({3, "Medium Priority"});
    pq.push({1, "High Priority"});

    std::cout << "Processing items in order of priority:\n";
    while (!pq.empty()) {
        std::cout << pq.top().second << " (Priority " << pq.top().first << ")\n";
        pq.pop();
    }

    return 0;
}
