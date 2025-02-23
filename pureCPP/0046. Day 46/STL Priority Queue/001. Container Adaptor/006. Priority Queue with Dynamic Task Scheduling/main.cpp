#include <iostream>
#include <queue>
#include <string>

struct Task {
    std::string name;
    int priority;

    bool operator<(const Task& other) const { 
        return priority < other.priority; 
    }
};

int main() {
    std::priority_queue<Task> taskQueue;

    taskQueue.push({"Write Report", 3});
    taskQueue.push({"Fix Bug", 5});
    taskQueue.push({"Attend Meeting", 2});

    std::cout << "Processing tasks by priority:\n";
    while (!taskQueue.empty()) {
        std::cout << "Task: " << taskQueue.top().name << " | Priority: " << taskQueue.top().priority << "\n";
        taskQueue.pop();
    }

    return 0;
}
