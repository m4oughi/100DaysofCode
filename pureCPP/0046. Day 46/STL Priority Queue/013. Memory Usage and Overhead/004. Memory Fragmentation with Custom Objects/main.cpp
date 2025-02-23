#include <iostream>
#include <queue>
#include <vector>

struct Task {
    int id;
    std::string description;

    bool operator<(const Task& other) const {
        return id < other.id;
    }
};

int main() {
    std::priority_queue<Task> taskQueue;

    for (int i = 0; i < 10000; ++i) {
        taskQueue.push({i, "Task Description"});
    }

    std::cout << "Priority queue contains " << taskQueue.size() << " tasks.\n";

    return 0;
}
