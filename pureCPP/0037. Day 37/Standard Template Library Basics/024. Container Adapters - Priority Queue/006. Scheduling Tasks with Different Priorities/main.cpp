#include <iostream>
#include <queue>
#include <string>

struct Task {
    std::string name;
    int priority;

    // Custom comparator for min-heap
    bool operator<(const Task& other) const {
        return priority > other.priority; // Lower priority comes first
    }
};

int main() {
    std::priority_queue<Task> taskQueue;

    taskQueue.push({"Task A", 3});
    taskQueue.push({"Task B", 1});
    taskQueue.push({"Task C", 2});

    std::cout << "Processing tasks by priority:\n";
    while (!taskQueue.empty()) {
        std::cout << taskQueue.top().name << " with priority " << taskQueue.top().priority << "\n";
        taskQueue.pop();
    }

    return 0;
}
