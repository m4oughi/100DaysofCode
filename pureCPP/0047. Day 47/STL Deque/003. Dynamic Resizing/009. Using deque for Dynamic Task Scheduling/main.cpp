#include <iostream>
#include <deque>

int main() {
    std::deque<std::string> tasks;

    // Adding tasks dynamically
    tasks.push_back("Task 1: Debugging");
    tasks.push_back("Task 2: Write Report");
    tasks.push_front("Task 0: Morning Standup");

    std::cout << "Current tasks:\n";
    for (const auto& task : tasks) std::cout << task << "\n";

    // Processing tasks dynamically
    std::cout << "\nProcessing tasks:\n";
    while (!tasks.empty()) {
        std::cout << "Completed: " << tasks.front() << "\n";
        tasks.pop_front();
    }

    return 0;
}
