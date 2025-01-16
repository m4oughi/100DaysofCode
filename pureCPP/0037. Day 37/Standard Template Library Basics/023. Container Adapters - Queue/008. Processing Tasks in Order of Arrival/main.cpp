#include <iostream>
#include <queue>
#include <string>

struct Task {
    std::string description;
    int priority;
};

int main() {
    std::queue<Task> taskQueue;

    taskQueue.push({"Clean the house", 3});
    taskQueue.push({"Pay bills", 2});
    taskQueue.push({"Complete C++ project", 1});

    while (!taskQueue.empty()) {
        std::cout << "Processing task: " << taskQueue.front().description << " with priority " << taskQueue.front().priority << "\n";
        taskQueue.pop();
    }

    return 0;
}
