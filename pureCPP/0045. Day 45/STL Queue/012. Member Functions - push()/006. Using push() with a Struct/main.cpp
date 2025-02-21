#include <iostream>
#include <queue>

struct Task {
    int id;
    std::string description;
};

int main() {
    std::queue<Task> taskQueue;

    taskQueue.push({1, "Fix bug in system"});
    taskQueue.push({2, "Implement new feature"});
    taskQueue.push({3, "Write unit tests"});

    std::cout << "Latest Task Added: " << taskQueue.back().description << std::endl;  // "Write unit tests"

    return 0;
}
