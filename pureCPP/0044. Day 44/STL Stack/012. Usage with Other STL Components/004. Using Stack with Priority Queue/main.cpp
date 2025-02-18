#include <iostream>
#include <stack>
#include <queue>

int main() {
    std::priority_queue<int> pq;
    pq.push(3); pq.push(1); pq.push(4); pq.push(2);

    std::stack<int> s;
    while (!pq.empty()) {
        s.push(pq.top());
        pq.pop();
    }

    std::cout << "Sorted elements in stack order: ";
    while (!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }
    return 0;
}
