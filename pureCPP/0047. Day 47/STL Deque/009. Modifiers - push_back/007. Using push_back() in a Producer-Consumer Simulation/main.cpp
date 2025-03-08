#include <iostream>
#include <deque>

int main() {
    std::deque<std::string> taskQueue;

    // Producer: Adding tasks to the queue
    taskQueue.push_back("Task 1");
    taskQueue.push_back("Task 2");
    taskQueue.push_back("Task 3");

    // Consumer: Processing tasks in FIFO order
    while (!taskQueue.empty()) {
        std::cout << "Processing: " << taskQueue.front() << "\n";
        taskQueue.pop_front(); // Remove the processed task
    }

    return 0;
}
