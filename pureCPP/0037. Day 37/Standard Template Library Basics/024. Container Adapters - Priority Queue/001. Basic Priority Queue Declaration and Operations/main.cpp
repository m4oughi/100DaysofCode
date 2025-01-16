#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq;

    // Adding elements
    pq.push(10);
    pq.push(5);
    pq.push(20);

    // Accessing the top element
    std::cout << "Top element: " << pq.top() << "\n";

    // Removing the top element
    pq.pop();
    std::cout << "Top element after pop: " << pq.top() << "\n";

    return 0;
}
