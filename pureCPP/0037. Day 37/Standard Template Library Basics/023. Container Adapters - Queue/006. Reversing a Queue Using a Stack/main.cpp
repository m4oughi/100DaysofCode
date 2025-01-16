#include <iostream>
#include <queue>
#include <stack>

void reverseQueue(std::queue<int>& q) {
    std::stack<int> s;

    // Move elements from queue to stack
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }

    // Move elements back to queue from stack
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

int main() {
    std::queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    reverseQueue(q);

    std::cout << "Queue after reversing: ";
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << "\n";

    return 0;
}
