#include <iostream>
#include <queue>

struct Task {
    int id;
    std::string description;
};

int main() {
    std::queue<Task> taskQueue;

    taskQueue.push({1, "Process Order"});
    taskQueue.push({2, "Update Database"});
    taskQueue.push({3, "Send Email"});
    taskQueue.push({4, "Generate Report"});

    std::cout << "Total Tasks: " << taskQueue.size() << std::endl;

    while (!taskQueue.empty()) {
        std::queue<Task>::size_type remainingTasks = taskQueue.size();
        std::cout << "Remaining Tasks: " << remainingTasks << std::endl;

        Task current = taskQueue.front();
        std::cout << "Executing Task " << current.id << ": " << current.description << std::endl;
        taskQueue.pop();
    }

    return 0;
}
