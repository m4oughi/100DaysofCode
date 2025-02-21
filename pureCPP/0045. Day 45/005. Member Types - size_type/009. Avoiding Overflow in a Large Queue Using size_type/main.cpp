#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    const std::queue<int>::size_type MAX_SIZE = 1000;

    for (int i = 0; i < 1050; ++i) {
        if (q.size() >= MAX_SIZE) {
            std::cout << "Queue size limit reached! Stopping at " << q.size() << " elements.\n";
            break;
        }
        q.push(i);
    }

    return 0;
}
