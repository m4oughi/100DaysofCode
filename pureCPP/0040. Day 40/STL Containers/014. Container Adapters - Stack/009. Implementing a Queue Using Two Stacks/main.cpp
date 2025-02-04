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
        int val = s2.top();
        s2.pop();
        return val;
    }
};

int main() {
    QueueUsingStack q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    
    std::cout << "Dequeued: " << q.dequeue() << "\n"; // 1
    std::cout << "Dequeued: " << q.dequeue() << "\n"; // 2

    return 0;
}
