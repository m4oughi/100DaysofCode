#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    q.push(5);
    q.push(10);
    q.push(15);

    while (!q.empty()) {
        std::cout << "Removing: " << q.front() << std::endl;
        q.pop();
    }

    std::cout << "Queue is empty now: " << q.empty() << std::endl;  // true

    return 0;
}
