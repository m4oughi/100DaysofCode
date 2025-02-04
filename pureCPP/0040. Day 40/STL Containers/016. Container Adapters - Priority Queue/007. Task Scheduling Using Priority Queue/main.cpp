#include <iostream>
#include <queue>
#include <string>

struct Task {
    int priority;
    std::string name;

    bool operator<(const Task& other) const {
        return priority < other.priority; // Higher priority tasks first
    }
};

int main() {
    std::priority_queue<Task> tasks;

    tasks.push({3, "Email"});
    tasks.push({1, "Meeting"});
    tasks.push({2, "Code Review"});

    while (!tasks.empty()) {
        std::cout << "Processing: " << tasks.top().name << "\n";
        tasks.pop();
    }

    return 0;
}
