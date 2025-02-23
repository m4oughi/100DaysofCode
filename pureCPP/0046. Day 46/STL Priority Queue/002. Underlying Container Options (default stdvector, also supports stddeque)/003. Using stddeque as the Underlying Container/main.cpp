#include <iostream>
#include <queue>
#include <deque>

int main() {
    std::priority_queue<int, std::deque<int>> pq; // Using std::deque

    pq.push(25);
    pq.push(50);
    pq.push(35);

    std::cout << "Top element: " << pq.top() << std::endl; // 50

    return 0;
}
