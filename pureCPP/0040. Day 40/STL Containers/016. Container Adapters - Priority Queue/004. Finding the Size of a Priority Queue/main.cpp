#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq;

    pq.push(5);
    pq.push(10);
    pq.push(15);

    std::cout << "Priority queue size: " << pq.size() << "\n"; // 3

    pq.pop();
    
    std::cout << "Size after pop: " << pq.size() << "\n"; // 2

    return 0;
}
