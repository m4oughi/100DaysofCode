#include <iostream>
#include <vector>
#include <algorithm>

struct Task {
    std::string name;
    int priority;

    bool operator<(const Task& other) const {
        return priority < other.priority; // Higher priority tasks come first
    }
};

int main() {
    std::vector<Task> tasks = {{"Task A", 5}, {"Task B", 3}, {"Task C", 8}};
    std::make_heap(tasks.begin(), tasks.end());

    if (std::is_heap(tasks.begin(), tasks.end())) {
        std::cout << "Tasks form a valid heap.\n";
    } else {
        std::cout << "Tasks do not form a valid heap.\n";
    }

    return 0;
}
