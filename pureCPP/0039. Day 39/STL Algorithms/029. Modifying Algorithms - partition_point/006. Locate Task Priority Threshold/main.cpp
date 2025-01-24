#include <iostream>
#include <vector>
#include <algorithm>

struct Task {
    int id;
    int priority;
};

int main() {
    std::vector<Task> tasks = {{1, 10}, {2, 8}, {3, 7}, {4, 5}, {5, 2}};
    std::stable_partition(tasks.begin(), tasks.end(), [](const Task& t) { return t.priority >= 7; });

    auto it = std::partition_point(tasks.begin(), tasks.end(), [](const Task& t) { return t.priority >= 7; });

    if (it != tasks.end()) {
        std::cout << "Partition point (first low-priority task): Task " << it->id << " (Priority: " << it->priority << ")\n";
    } else {
        std::cout << "All tasks are high-priority." << std::endl;
    }

    return 0;
}
