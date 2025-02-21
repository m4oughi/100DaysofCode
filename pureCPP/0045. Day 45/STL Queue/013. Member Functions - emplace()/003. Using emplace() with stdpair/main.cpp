#include <iostream>
#include <queue>

int main() {
    std::queue<std::pair<int, std::string>> q;

    q.emplace(1, "Task A");
    q.emplace(2, "Task B");
    q.emplace(3, "Task C");

    std::cout << "Front Task: " << q.front().second << std::endl;  // "Task A"
    std::cout << "Last Task: " << q.back().second << std::endl;    // "Task C"

    return 0;
}
