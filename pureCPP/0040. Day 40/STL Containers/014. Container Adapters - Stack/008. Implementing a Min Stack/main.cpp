#include <iostream>
#include <stack>
#include <climits>

class MinStack {
    std::stack<int> s, minStack;

public:
    void push(int x) {
        s.push(x);
        if (minStack.empty() || x <= minStack.top()) {
            minStack.push(x);
        }
    }

    void pop() {
        if (s.top() == minStack.top()) {
            minStack.pop();
        }
        s.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return minStack.top();
    }
};

int main() {
    MinStack ms;
    ms.push(10);
    ms.push(20);
    ms.push(5);
    std::cout << "Min: " << ms.getMin() << "\n"; // 5
    ms.pop();
    std::cout << "Min after pop: " << ms.getMin() << "\n"; // 10
    return 0;
}
