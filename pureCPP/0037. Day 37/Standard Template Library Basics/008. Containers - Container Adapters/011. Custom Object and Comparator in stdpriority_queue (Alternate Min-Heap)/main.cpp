#include <iostream>
#include <queue>
#include <vector>

struct Task {
    int priority;
    std::string description;
};

struct CompareTask {
    bool operator()(const Task &a, const Task &b) {
        return a.priority > b.priority; // Min-heap based on priority
    }
};

int main() {
    std::priority_queue<Task, std::vector<Task>, CompareTask> taskQueue;
    taskQueue.push({2, "Medium priority task"});
    taskQueue.push({1, "High priority task"});
    taskQueue.push({3, "Low priority task"});

    while (!taskQueue.empty()) {
        Task t = taskQueue.top();
        std::cout << t.description << " (Priority " << t.priority << ")\n";
        taskQueue.pop();
    }
    return 0;
}
