#include <iostream>
#include <queue>
#include <stack>

void reverseQueue(std::queue<int>& q) {
    std::stack<int> s;
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

int main() {
    std::queue<int> q;
    for (int i = 1; i <= 5; ++i) q.push(i);

    reverseQueue(q);

    std::cout << "Reversed Queue: ";
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
