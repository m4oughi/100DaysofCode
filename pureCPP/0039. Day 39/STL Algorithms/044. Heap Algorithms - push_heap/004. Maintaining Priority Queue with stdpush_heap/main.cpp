#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> priorityQueue = {50, 40, 30};
    std::make_heap(priorityQueue.begin(), priorityQueue.end());

    // Adding new tasks to the queue
    priorityQueue.push_back(60);
    std::push_heap(priorityQueue.begin(), priorityQueue.end());

    priorityQueue.push_back(20);
    std::push_heap(priorityQueue.begin(), priorityQueue.end());

    std::cout << "Priority queue after push_heap: ";
    for (int num : priorityQueue) {
        std::cout << num << " ";
    }

    return 0;
}
