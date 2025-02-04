#include <iostream>
#include <queue>

struct Task {
    int priority;
    std::string name;

    bool operator<(const Task& other) const {
        return priority < other.priority; // Higher priority tasks first
    }
};

int main() {
    std::priority_queue<Task> tasks;

    tasks.push({3, "Task A"});
    tasks.push({1, "Task B"});
    tasks.push({2, "Task C"});

    while (!tasks.empty()) {
        std::cout << "Processing: " << tasks.top().name << "\n";
        tasks.pop();
    }

    return 0;
}
