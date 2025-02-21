#include <iostream>
#include <queue>
#include <vector>

struct Task {
    int priority;
    std::string description;

    bool operator<(const Task& other) const {
        return priority < other.priority;  // Higher priority first
    }
};

int main() {
    std::priority_queue<Task> pq;

    pq.push({2, "Medium Priority Task"});
    pq.push({3, "High Priority Task"});
    pq.push({1, "Low Priority Task"});

    std::priority_queue<Task>::value_type topTask = pq.top();
    std::cout << "Top Priority Task: " << topTask.description << " (Priority: " << topTask.priority << ")" << std::endl;

    return 0;
}
