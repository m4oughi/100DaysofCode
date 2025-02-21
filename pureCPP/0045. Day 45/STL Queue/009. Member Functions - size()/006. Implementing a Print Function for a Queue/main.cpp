#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    const size_t MAX_SIZE = 5;

    for (int i = 1; i <= 7; ++i) {
        if (q.size() < MAX_SIZE) {
            q.push(i);
            std::cout << "Pushed: " << i << ", Queue Size: " << q.size() << std::endl;
        } else {
            std::cout << "Queue is full, cannot push: " << i << std::endl;
        }
    }

    return 0;
}
