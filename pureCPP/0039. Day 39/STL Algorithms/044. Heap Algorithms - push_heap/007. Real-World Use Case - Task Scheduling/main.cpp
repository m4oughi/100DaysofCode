#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct Task {
    std::string name;
    int priority;

    bool operator<(const Task& other) const {
        return priority < other.priority;
    }
};

int main() {
    std::vector<Task> taskHeap;

    taskHeap.push_back({"Task A", 3});
    std::push_heap(taskHeap.begin(), taskHeap.end());

    taskHeap.push_back({"Task B", 5});
    std::push_heap(taskHeap.begin(), taskHeap.end());

    taskHeap.push_back({"Task C", 1});
    std::push_heap(taskHeap.begin(), taskHeap.end());

    std::cout << "Tasks in the heap:\n";
    for (const auto& task : taskHeap) {
        std::cout << task.name << " with priority " << task.priority << "\n";
    }

    return 0;
}
