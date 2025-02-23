#include <iostream>
#include <queue>
#include <vector>

class Task {
public:
    int id;
    int priority;

    Task(int i, int p) : id(i), priority(p) {}

    bool operator<(const Task& other) const { 
        return priority < other.priority; // Max-Heap (higher priority first)
    }
};

int main() {
    std::priority_queue<Task> pq;

    pq.push(Task(1, 5));
    pq.push(Task(2, 10));
    pq.push(Task(3, 1));

    std::cout << "Processing tasks:\n";
    while (!pq.empty()) {
        std::cout << "Task ID: " << pq.top().id << ", Priority: " << pq.top().priority << "\n";
        pq.pop();
    }

    return 0;
}
