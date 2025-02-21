#include <iostream>
#include <queue>

struct Task {
    int id;
    std::string description;
};

int main() {
    std::queue<Task> taskQueue;

    taskQueue.push({1, "Download file"});
    taskQueue.push({2, "Process data"});
    taskQueue.push({3, "Generate report"});

    while (!taskQueue.empty()) {
        Task currentTask = taskQueue.front();
        std::cout << "Executing Task " << currentTask.id << ": " << currentTask.description << std::endl;
        taskQueue.pop();
    }

    return 0;
}
