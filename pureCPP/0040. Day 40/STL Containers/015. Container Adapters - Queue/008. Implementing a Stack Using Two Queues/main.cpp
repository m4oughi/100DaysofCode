#include <iostream>
#include <queue>

class StackUsingQueues {
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

    void pop() {
        if (!q1.empty()) q1.pop();
    }

    int top() {
        return q1.empty() ? -1 : q1.front();
    }

    bool empty() {
        return q1.empty();
    }
};

int main() {
    StackUsingQueues s;
    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "Top element: " << s.top() << "\n"; // 30

    s.pop();
    std::cout << "New top: " << s.top() << "\n"; // 20

    return 0;
}
