#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq;

    pq.push(10);
    pq.push(5);
    pq.push(20);
    pq.push(15);

    std::cout << "Top element: " << pq.top() << "\n"; // 20 (max element)

    pq.pop(); // Remove top element (20)

    std::cout << "New top: " << pq.top() << "\n"; // 15

    return 0;
}
