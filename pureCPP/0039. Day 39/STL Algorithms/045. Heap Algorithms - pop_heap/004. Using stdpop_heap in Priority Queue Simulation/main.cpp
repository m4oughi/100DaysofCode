#include <iostream>
#include <vector>
#include <algorithm>

struct Task {
    std::string name;
    int priority;

    bool operator<(const Task& other) const {
        return priority < other.priority;
    }
};

int main() {
    std::vector<Task> tasks = {{"Task A", 3}, {"Task B", 5}, {"Task C", 1}};
    std::make_heap(tasks.begin(), tasks.end());

    std::cout << "Executing tasks by priority:\n";
    while (!tasks.empty()) {
        std::pop_heap(tasks.begin(), tasks.end());
        Task currentTask = tasks.back();
        tasks.pop_back();
        std::cout << "Executing " << currentTask.name << " with priority " << currentTask.priority << "\n";
    }

    return 0;
}
