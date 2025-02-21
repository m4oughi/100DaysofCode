#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::queue<int> normalQueue;
    std::vector<int> priorityTasks = {50, 30, 10};  // Sorted manually (highest priority first)

    normalQueue.push(5);
    normalQueue.push(15);
    normalQueue.push(25);

    std::cout << "Processing priority tasks first:\n";
    for (int task : priorityTasks) {
        std::cout << "Processing high-priority task: " << task << std::endl;
    }

    std::cout << "\nProcessing normal tasks:\n";
    while (!normalQueue.empty()) {
        std::cout << "Processing task: " << normalQueue.front() << std::endl;
        normalQueue.pop();
    }

    return 0;
}
