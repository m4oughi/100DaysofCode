#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct Task {
    std::string name;
    int deadline;

    bool operator<(const Task& other) const {
        return deadline > other.deadline; // Earlier deadlines have higher priority
    }
};

int main() {
    std::vector<Task> taskHeap = {
        {"Task 1", 5}, {"Task 2", 2}, {"Task 3", 8}, {"Task 4", 1}
    };
    std::make_heap(taskHeap.begin(), taskHeap.end());

    std::cout << "Executing tasks by deadlines:\n";
    while (!taskHeap.empty()) {
        std::pop_heap(taskHeap.begin(), taskHeap.end());
        Task task = taskHeap.back();
        taskHeap.pop_back();
        std::cout << "Executing " << task.name << " (Deadline: " << task.deadline << ")\n";
    }

    return 0;
}
