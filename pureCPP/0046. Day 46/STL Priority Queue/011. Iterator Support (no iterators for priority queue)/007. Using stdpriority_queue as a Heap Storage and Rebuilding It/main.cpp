#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::priority_queue<int> pq;
    pq.push(50);
    pq.push(20);
    pq.push(40);

    std::vector<int> elements;
    while (!pq.empty()) {
        elements.push_back(pq.top());
        pq.pop();
    }

    std::priority_queue<int> new_pq(elements.begin(), elements.end());

    std::cout << "Rebuilt priority queue:\n";
    while (!new_pq.empty()) {
        std::cout << new_pq.top() << " ";
        new_pq.pop();
    }
    return 0;
}
