#include <iostream>
#include <queue>
#include <vector>

struct Task {
    int id;
    int priority;

    bool operator<(const Task& other) const {
        if (priority == other.priority) {
            return id > other.id; // Lower ID gets higher priority if priority is same
        }
        return priority < other.priority; // Higher priority is served first
    }
};

int main() {
    std::priority_queue<Task> pq;

    pq.push({101, 5});
    pq.push({102, 5});
    pq.push({103, 10});
    pq.push({104, 1});

    while (!pq.empty()) {
        std::cout << "Processing Task ID: " << pq.top().id << " with priority: " << pq.top().priority << "\n";
        pq.pop();
    }

    return 0;
}
