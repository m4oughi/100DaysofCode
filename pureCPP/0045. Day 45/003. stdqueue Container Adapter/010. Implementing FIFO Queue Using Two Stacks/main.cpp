#include <iostream>
#include <stack>

class QueueUsingStacks {
    std::stack<int> s1, s2;

public:
    void enqueue(int x) {
        s1.push(x);
    }

    void dequeue() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if (!s2.empty()) {
            s2.pop();
        }
    }

    int front() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }
};

int main() {
    QueueUsingStacks q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    std::cout << "Front: " << q.front() << std::endl;  // 1
    q.dequeue();
    std::cout << "Front after dequeue: " << q.front() << std::endl;  // 2

    return 0;
}
