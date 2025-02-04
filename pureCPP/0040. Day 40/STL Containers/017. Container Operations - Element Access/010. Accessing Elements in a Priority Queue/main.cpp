#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq;
    pq.push(100);
    pq.push(200);
    pq.push(50);

    std::cout << "Highest priority element: " << pq.top() << "\n"; // 200

    return 0;
}
