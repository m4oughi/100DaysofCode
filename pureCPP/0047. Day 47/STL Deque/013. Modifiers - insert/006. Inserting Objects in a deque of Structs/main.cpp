#include <iostream>
#include <deque>

struct Task {
    int id;
    std::string name;
};

int main() {
    std::deque<Task> tasks = {{1, "Task A"}, {3, "Task C"}};

    // Insert a new task at index 1
    tasks.insert(tasks.begin() + 1, {2, "Task B"});

    std::cout << "Tasks after insertion:\n";
    for (const auto& task : tasks) {
        std::cout << "ID: " << task.id << ", Name: " << task.name << "\n";
    }

    return 0;
}
