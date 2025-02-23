#include <iostream>
#include <queue>
#include <vector>

struct Task {
    int id;
    int priority;

    Task(int i, int p) : id(i), priority(p) {}
};

struct TaskCompare {
    bool operator()(const Task& a, const Task& b) {
        return a.priority < b.priority; // Higher priority first (Max-Heap)
    }
};

int main() {
    std::priority_queue<Task, std::vector<Task>, TaskCompare> pq;

    pq.push(Task(1, 5));
    pq.push(Task(2, 10));
    pq.push(Task(3, 1));

    std::cout << "Processing tasks in order of priority:\n";
    while (!pq.empty()) {
        std::cout << "Task ID: " << pq.top().id << ", Priority: " << pq.top().priority << "\n";
        pq.pop();
    }
    return 0;
}
