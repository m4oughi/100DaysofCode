#include <iostream>
#include <queue>

int main() {
    std::queue<std::string> q;
    q.push("Task 1");
    q.push("Task 2");
    q.push("Task 3");

    while (!q.empty()) {
        std::cout << "Processing: " << q.front() << std::endl;
        q.pop();
    }

    return 0;
}
