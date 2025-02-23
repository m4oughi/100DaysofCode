#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::priority_queue<int> pq;
    const int N = 100000;

    std::cout << "Pushing " << N << " elements into priority queue...\n";
    for (int i = 0; i < N; ++i) {
        pq.push(i);
    }

    std::cout << "Size of priority queue: " << pq.size() << "\n";
    std::cout << "Top element: " << pq.top() << "\n";

    return 0;
}
