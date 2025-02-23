#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq;
    
    pq.push(15);
    pq.push(25);
    pq.push(5);

    while (!pq.empty()) {
        std::cout << "Top: " << pq.top() << ", Size: " << pq.size() << std::endl;
        pq.pop();
    }

    std::cout << "Final size: " << pq.size() << std::endl; // Should be 0

    return 0;
}
