#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    if (!q.empty()) {
        std::cout << "Front element: " << q.front() << std::endl;
    } else {
        std::cout << "Queue is empty, cannot access front element." << std::endl;
    }

    q.push(100);
    std::cout << "Front element after push: " << q.front() << std::endl;  // 100

    return 0;
}
