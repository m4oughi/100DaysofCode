#include <iostream>
#include <queue>

int main() {
    std::priority_queue<std::pair<int, std::string>> pq;

    pq.push({3, "Task C"});
    pq.push({1, "Task A"});
    pq.push({2, "Task B"});

    std::cout << "Processing tasks:\n";
    while (!pq.empty()) {
        std::cout << pq.top().second << " (Priority: " << pq.top().first << ")\n";
        pq.pop();
    }

    std::cout << "All tasks processed. Is queue empty? " << (pq.empty() ? "Yes" : "No") << std::endl;

    return 0;
}
