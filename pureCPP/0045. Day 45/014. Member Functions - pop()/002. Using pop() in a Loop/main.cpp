#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty()) {
        std::cout << "Removing: " << q.front() << std::endl;
        q.pop();
    }

    std::cout << "Queue is now empty." << std::endl;

    return 0;
}
