#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> tasks = {8, 3, 10, 5, 6};
    std::make_heap(tasks.begin(), tasks.end());

    // Process tasks while sorting the heap
    while (!tasks.empty()) {
        std::pop_heap(tasks.begin(), tasks.end());
        int currentTask = tasks.back();
        tasks.pop_back();
        std::cout << "Processing task with priority " << currentTask << "\n";
        std::sort_heap(tasks.begin(), tasks.end()); // Sort the remaining heap
    }

    return 0;
}
