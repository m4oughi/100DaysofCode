#include <iostream>
#include <queue>
#include <string>

struct Task {
    int id;
    std::string description;
};

int main() {
    std::queue<Task> tasks;

    tasks.push({1, "Fix Bug"});
    tasks.push({2, "Implement Feature"});
    tasks.push({3, "Review Code"});

    while (!tasks.empty()) {
        Task current = tasks.front();
        std::cout << "Processing Task ID: " << current.id << " - " << current.description << std::endl;
        tasks.pop();
    }

    std::cout << "All tasks processed. Queue is empty: " << tasks.empty() << std::endl;

    return 0;
}
