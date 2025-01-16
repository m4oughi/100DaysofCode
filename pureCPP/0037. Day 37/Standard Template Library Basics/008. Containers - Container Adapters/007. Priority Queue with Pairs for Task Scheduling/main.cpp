#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::priority_queue<std::pair<int, std::string>> tasks;
    tasks.push({3, "Low priority task"});
    tasks.push({1, "High priority task"});
    tasks.push({2, "Medium priority task"});

    while (!tasks.empty()) {
        std::cout << tasks.top().second << " (Priority " << tasks.top().first << ")\n";
        tasks.pop();
    }
    return 0;
}
