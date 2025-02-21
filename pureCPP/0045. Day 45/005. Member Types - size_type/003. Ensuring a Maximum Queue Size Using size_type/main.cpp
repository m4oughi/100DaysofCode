#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    const std::queue<int>::size_type MAX_SIZE = 5;

    for (int i = 1; i <= 7; ++i) {
        if (q.size() < MAX_SIZE) {
            q.push(i * 10);
            std::cout << "Added: " << i * 10 << ", Current Size: " << q.size() << std::endl;
        } else {
            std::cout << "Queue is full! Cannot add " << i * 10 << std::endl;
        }
    }

    return 0;
}
