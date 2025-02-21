#include <iostream>
#include <queue>

struct Task {
    int taskID;
    std::string description;

    Task(int id, std::string desc) : taskID(id), description(desc) {
        std::cout << "Task Added: " << taskID << " - " << description << std::endl;
    }
};

int main() {
    std::queue<Task> taskQueue;

    taskQueue.emplace(101, "Process payments");
    taskQueue.emplace(102, "Generate reports");
    taskQueue.emplace(103, "Backup database");

    return 0;
}
