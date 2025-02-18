#include <iostream>
#include <stack>

class QueueUsingStack {
    std::stack<int> s1, s2;

public:
    void enqueue(int x) {
        s1.push(x);
    }

    int dequeue() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if (s2.empty()) {
            throw std::runtime_error("Queue is empty");
        }
        int front = s2.top();
        s2.pop();
        return front;
    }
};

int main() {
    QueueUsingStack q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    std::cout << "Dequeued: " << q.dequeue() << std::endl;
    std::cout << "Dequeued: " << q.dequeue() << std::endl;

    return 0;
}
