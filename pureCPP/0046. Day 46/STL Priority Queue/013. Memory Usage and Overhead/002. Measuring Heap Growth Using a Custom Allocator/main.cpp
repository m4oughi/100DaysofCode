#include <iostream>
#include <queue>
#include <vector>
#include <cstdlib>

int main() {
    std::priority_queue<int> pq;
    size_t prevUsage = 0;

    for (int i = 1; i <= 100000; i *= 10) {
        for (int j = 0; j < i; ++j) {
            pq.push(j);
        }

        std::cout << "After inserting " << i << " elements, size: " << pq.size() << "\n";
    }

    return 0;
}
