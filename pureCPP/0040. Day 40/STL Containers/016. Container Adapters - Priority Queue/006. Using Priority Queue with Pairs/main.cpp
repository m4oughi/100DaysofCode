#include <iostream>
#include <queue>
#include <string>

int main() {
    std::priority_queue<std::pair<int, std::string>> pq;

    pq.push({3, "Task C"});
    pq.push({1, "Task A"});
    pq.push({2, "Task B"});

    while (!pq.empty()) {
        std::cout << "Processing: " << pq.top().second << "\n";
        pq.pop();
    }

    return 0;
}
