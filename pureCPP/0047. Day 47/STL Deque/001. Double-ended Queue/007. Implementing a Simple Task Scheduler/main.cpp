#include <iostream>
#include <deque>

int main() {
    std::deque<std::string> tasks;

    // Adding tasks
    tasks.push_back("Task 1: Code Review");
    tasks.push_back("Task 2: Write Report");
    tasks.push_front("Task 0: Morning Meeting");

    // Processing tasks in order
    while (!tasks.empty()) {
        std::cout << "Processing: " << tasks.front() << "\n";
        tasks.pop_front();
    }

    return 0;
}
