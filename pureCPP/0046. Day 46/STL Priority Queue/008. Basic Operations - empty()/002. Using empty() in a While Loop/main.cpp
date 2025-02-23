#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq;
    
    pq.push(15);
    pq.push(25);
    pq.push(5);

    std::cout << "Processing all elements:\n";
    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop();
    }

    std::cout << "\nIs priority queue empty now? " << (pq.empty() ? "Yes" : "No") << std::endl;

    return 0;
}
