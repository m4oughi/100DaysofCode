#include <iostream>
#include <vector>
#include <algorithm>

struct Task {
    int id;
    int priority; // Higher priority means more important
};

int main() {
    std::vector<Task> tasks = {{1, 10}, {2, 5}, {3, 7}, {4, 3}, {5, 8}, {6, 1}};

    std::stable_partition(tasks.begin(), tasks.end(), [](const Task& t) { return t.priority >= 7; });

    std::cout << "High-priority tasks:\n";
    for (const auto& task : tasks) {
        if (task.priority >= 7) std::cout << "Task " << task.id << " (Priority: " << task.priority << ")\n";
    }

    std::cout << "\nLow-priority tasks:\n";
    for (const auto& task : tasks) {
        if (task.priority < 7) std::cout << "Task " << task.id << " (Priority: " << task.priority << ")\n";
    }

    return 0;
}
