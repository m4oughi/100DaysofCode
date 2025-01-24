#include <iostream>
#include <vector>
#include <algorithm>

struct Task {
    std::string name;
    int priority;

    bool operator<(const Task& other) const {
        return priority < other.priority; // Higher priority comes first
    }
};

int main() {
    std::vector<Task> tasks = {{"Task A", 3}, {"Task B", 5}, {"Task C", 1}};
    std::make_heap(tasks.begin(), tasks.end());

    std::cout << "Tasks sorted by priority in heap:\n";
    for (const auto& task : tasks) {
        std::cout << task.name << " (Priority: " << task.priority << ")\n";
    }

    return 0;
}
