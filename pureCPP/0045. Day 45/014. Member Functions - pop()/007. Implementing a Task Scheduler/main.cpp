#include <iostream>
#include <queue>

struct Task {
    int taskID;
    std::string description;

    Task(int id, std::string desc) : taskID(id), description(desc) {}
};

int main() {
    std::queue<Task> taskQueue;

    taskQueue.emplace(201, "Backup database");
    taskQueue.emplace(202, "Generate reports");
    taskQueue.emplace(203, "Send emails");

    while (!taskQueue.empty()) {
        Task currentTask = taskQueue.front();
        std::cout << "Executing Task: " << currentTask.taskID << " - " << currentTask.description << std::endl;
        taskQueue.pop();
    }

    return 0;
}
