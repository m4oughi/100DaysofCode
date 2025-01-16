#include <iostream>
#include <queue>
#include <string>

struct Task {
    std::string description;
    int priority;

    // Define a comparator for max-heap
    bool operator<(const Task& other) const {
        return priority < other.priority; // Higher priority comes first
    }
};

int main() {
    std::priority_queue<Task> taskQueue;

    taskQueue.push({"Complete project", 1});
    taskQueue.push({"Pay bills", 3});
    taskQueue.push({"Buy groceries", 2});

    while (!taskQueue.empty()) {
        std::cout << "Task: " << taskQueue.top().description 
                  << ", Priority: " << taskQueue.top().priority << "\n";
        taskQueue.pop();
    }

    return 0;
}
