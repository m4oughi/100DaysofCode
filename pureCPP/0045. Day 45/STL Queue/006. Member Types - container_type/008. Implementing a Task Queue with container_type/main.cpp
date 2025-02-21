#include <iostream>
#include <queue>
#include <string>

struct Task {
    int id;
    std::string description;
};

int main() {
    std::queue<Task>::container_type taskContainer;

    taskContainer.push_back({1, "Process Data"});
    taskContainer.push_back({2, "Send Email"});
    taskContainer.push_back({3, "Generate Report"});

    for (const auto& task : taskContainer) {
        std::cout << "Task ID: " << task.id << ", Description: " << task.description << std::endl;
    }

    return 0;
}
