#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    for (int i = 1; i <= 6; ++i) {
        q.push(i * 10);
    }

    std::queue<int>::size_type halfSize = q.size() / 2;
    std::cout << "Processing first half of the queue...\n";

    while (q.size() > halfSize) {
        std::cout << "Processing: " << q.front() << std::endl;
        q.pop();
    }

    std::cout << "Remaining queue size: " << q.size() << std::endl;

    return 0;
}
