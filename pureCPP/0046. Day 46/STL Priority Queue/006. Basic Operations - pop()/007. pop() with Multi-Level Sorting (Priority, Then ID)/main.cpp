#include <iostream>
#include <queue>

struct Task {
    int id;
    int priority;

    bool operator<(const Task& other) const {
        if (priority == other.priority) {
            return id > other.id; // Lower ID gets higher priority if priority is the same
        }
        return priority < other.priority; // Higher priority first
    }
};

int main() {
    std::priority_queue<Task> pq;

    pq.push({101, 5});
    pq.push({102, 5});
    pq.push({103, 10});
    pq.push({104, 1});

    std::cout << "Processing tasks:\n";
    while (!pq.empty()) {
        std::cout << "Task ID: " << pq.top().id << ", Priority: " << pq.top().priority << "\n";
        pq.pop();
    }

    return 0;
}
