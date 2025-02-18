#include <iostream>
#include <queue>

class StackUsingQueue {
    std::queue<int> q1, q2;

public:
    void push(int x) {
        q2.push(x);
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        std::swap(q1, q2);
    }

    int pop() {
        if (q1.empty()) throw std::runtime_error("Stack is empty");
        int top = q1.front();
        q1.pop();
        return top;
    }
};

int main() {
    StackUsingQueue s;
    s.push(1);
    s.push(2);
    s.push(3);

    std::cout << "Popped: " << s.pop() << std::endl;
    std::cout << "Popped: " << s.pop() << std::endl;

    return 0;
}
