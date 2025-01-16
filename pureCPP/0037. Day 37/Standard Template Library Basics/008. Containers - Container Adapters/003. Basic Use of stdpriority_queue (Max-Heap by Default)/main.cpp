#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(5);

    while (!pq.empty()) {
        std::cout << pq.top() << " "; // Outputs the largest element
        pq.pop();                     // Removes the largest element
    }
    return 0;
}
