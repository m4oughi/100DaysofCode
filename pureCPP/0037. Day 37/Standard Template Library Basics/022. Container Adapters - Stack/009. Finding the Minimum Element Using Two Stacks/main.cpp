#include <iostream>
#include <stack>

class MinStack {
private:
    std::stack<int> dataStack;
    std::stack<int> minStack;

public:
    void push(int x) {
        dataStack.push(x);
        if (minStack.empty() || x <= minStack.top()) {
            minStack.push(x);
        }
    }

    void pop() {
        if (dataStack.top() == minStack.top()) {
            minStack.pop();
        }
        dataStack.pop();
    }

    int top() {
        return dataStack.top();
    }

    int getMin() {
        return minStack.top();
    }
};

int main() {
    MinStack s;
    s.push(5);
    s.push(2);
    s.push(3);
    s.push(1);

    std::cout << "Minimum element: " << s.getMin() << "\n"; // Should print 1

    s.pop();
    std::cout << "Minimum element after one pop: " << s.getMin() << "\n"; // Should print 2

    return 0;
}
