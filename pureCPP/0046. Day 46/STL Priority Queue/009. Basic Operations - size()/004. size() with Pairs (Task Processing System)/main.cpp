#include <iostream>
#include <queue>

int main() {
    std::priority_queue<std::pair<int, std::string>> pq;

    pq.push({3, "Task C"});
    pq.push({1, "Task A"});
    pq.push({2, "Task B"});

    std::cout << "Total tasks: " << pq.size() << std::endl;

    while (!pq.empty()) {
        std::cout << "Processing: " << pq.top().second << " (Priority: " << pq.top().first << "), Remaining: " << pq.size() << std::endl;
        pq.pop();
    }

    return 0;
}
