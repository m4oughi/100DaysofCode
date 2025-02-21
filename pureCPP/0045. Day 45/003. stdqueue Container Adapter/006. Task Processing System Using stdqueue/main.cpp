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

    while (!taskQueue.empty()) {
        Task current = taskQueue.front();
        std::cout << "Executing Task " << current.id << ": " << current.description << std::endl;
        taskQueue.pop();
    }

    return 0;
}
