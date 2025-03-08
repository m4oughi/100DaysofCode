#include <iostream>
#include <deque>

int main() {
    std::deque<std::string> taskQueue;

    // Adding tasks (simulating queue)
    taskQueue.push_back("Task A");
    taskQueue.push_back("Task B");
    taskQueue.push_back("Task C");

    std::cout << "Processing tasks:\n";
    while (!taskQueue.empty()) {
        std::cout << "Processing: " << taskQueue.front() << "\n";
        taskQueue.pop_front();
    }

    return 0;
}
