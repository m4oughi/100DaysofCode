#include <iostream>
#include <queue>
#include <memory>

struct Task {
    std::string name;
    Task(std::string n) : name(n) {}
};

int main() {
    std::queue<std::shared_ptr<Task>> taskQueue;

    taskQueue.push(std::make_shared<Task>("Task 1"));
    taskQueue.push(std::make_shared<Task>("Task 2"));

    while (!taskQueue.empty()) {
        std::queue<std::shared_ptr<Task>>::value_type taskPtr = taskQueue.front();
        std::cout << "Processing: " << taskPtr->name << std::endl;
        taskQueue.pop();
    }

    return 0;
}
