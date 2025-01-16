#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::priority_queue<int> pq;

    pq.push(5);
    pq.push(10);
    pq.push(1);

    std::cout << "Priority queue elements (highest to lowest): ";
    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop();
    }
    std::cout << "\n";

    return 0;
}
