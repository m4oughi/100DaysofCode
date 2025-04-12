#include <iostream>
#include <map>
#include <vector>

enum class TaskStatus {
    NotStarted,
    InProgress,
    Completed
};

int main() {
    std::map<TaskStatus, std::vector<std::string>> taskMap;

    // Dynamically adding tasks for each status
    taskMap[TaskStatus::NotStarted].push_back("Task A");
    taskMap[TaskStatus::InProgress].push_back("Task B");
    taskMap[TaskStatus::Completed].push_back("Task C");

    // Displaying tasks based on their status
    std::cout << "Not Started Tasks: ";
    for (const auto& task : taskMap[TaskStatus::NotStarted]) {
        std::cout << task << " ";
    }
    std::cout << "\n";

    std::cout << "In Progress Tasks: ";
    for (const auto& task : taskMap[TaskStatus::InProgress]) {
        std::cout << task << " ";
    }
    std::cout << "\n";

    std::cout << "Completed Tasks: ";
    for (const auto& task : taskMap[TaskStatus::Completed]) {
        std::cout << task << " ";
    }
    std::cout << "\n";

    return 0;
}
