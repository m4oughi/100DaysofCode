#include <iostream>
#include <queue>
#include <deque>

int main() {
    std::priority_queue<int, std::deque<int>> pq;

    for (int i = 0; i < 100000; ++i) {
        pq.push(i);
    }

    std::cout << "Size of priority queue: " << pq.size() << "\n";

    return 0;
}
