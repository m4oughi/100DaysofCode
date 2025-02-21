#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    // Enqueue some elements
    for (int i = 1; i <= 5; ++i) {
        q.push(i);
    }

    std::cout << "Rotating the queue 3 times:\n";
    for (int i = 0; i < 3; ++i) {
        int frontElement = q.front();
        q.pop();
        q.push(frontElement);  // Move front to back
        std::cout << "New front: " << q.front() << std::endl;
    }

    return 0;
}
