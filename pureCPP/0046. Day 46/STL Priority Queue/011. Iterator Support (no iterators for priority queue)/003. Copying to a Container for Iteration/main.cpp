#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::priority_queue<int> pq;
    pq.push(25);
    pq.push(50);
    pq.push(10);

    std::vector<int> elements;
    
    while (!pq.empty()) {
        elements.push_back(pq.top()); // Store elements in vector
        pq.pop();
    }

    std::cout << "Iterating over elements after copying:\n";
    for (int num : elements) {
        std::cout << num << " ";
    }
    return 0;
}
