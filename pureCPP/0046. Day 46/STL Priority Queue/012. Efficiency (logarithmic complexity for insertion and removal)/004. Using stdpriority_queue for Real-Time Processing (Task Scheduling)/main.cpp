#include <iostream>
#include <queue>
#include <vector>

struct Task {
    int priority;
    std::string name;
    
    bool operator<(const Task& other) const {
        return priority < other.priority; // Max-Heap (higher priority first)
    }
};

int main() {
    std::priority_queue<Task> taskQueue;

    taskQueue.push({2, "Write Report"});
    taskQueue.push({5, "Fix Critical Bug"});
    taskQueue.push({1, "Read Emails"});
    taskQueue.push({3, "Implement Feature"});

    std::cout << "Processing tasks by priority:\n";
    while (!taskQueue.empty()) {
        std::cout << "Task: " << taskQueue.top().name << " (Priority: " 
                  << taskQueue.top().priority << ")\n";
        taskQueue.pop();
    }
    
    return 0;
}
