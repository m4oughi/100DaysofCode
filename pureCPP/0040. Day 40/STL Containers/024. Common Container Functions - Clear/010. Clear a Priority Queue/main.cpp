#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq;
    pq.push(10);
    pq.push(20);

    std::cout << "Before clearing, size: " << pq.size() << std::endl;

    // Empty the priority queue by popping all elements
    while (!pq.empty()) {
        pq.pop();
    }

    std::cout << "After clearing, size: " << pq.size() << std::endl;  // Output: After clearing, size: 0

    return 0;
}
