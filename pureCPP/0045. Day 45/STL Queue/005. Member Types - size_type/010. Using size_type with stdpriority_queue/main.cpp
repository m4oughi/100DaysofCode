#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq;
    
    pq.push(50);
    pq.push(30);
    pq.push(20);
    pq.push(10);
    
    std::priority_queue<int>::size_type pqSize = pq.size();
    std::cout << "Priority Queue Size: " << pqSize << std::endl;  // 4

    return 0;
}
