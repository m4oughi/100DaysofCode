#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> tasks = {5, 3, 8, 1, 2};
    std::make_heap(tasks.begin(), tasks.end());

    std::cout << "Task priorities in heap: ";
    for (int priority : tasks) {
        std::cout << priority << " ";
    }
    std::cout << "\n";

    // Simulate task processing
    while (!tasks.empty()) {
        std::pop_heap(tasks.begin(), tasks.end());
        int highestPriority = tasks.back();
        tasks.pop_back();
        std::cout << "Processing task with priority " << highestPriority << "\n";
    }

    return 0;
}
