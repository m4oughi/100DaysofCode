#include <iostream>
#include <stack>

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
    ms.push(3);
    ms.push(5);
    std::cout << "Min: " << ms.getMin() << std::endl; // 3
    
    ms.push(2);
    ms.push(1);
    std::cout << "Min: " << ms.getMin() << std::endl; // 1

    ms.pop();
    std::cout << "Min after pop: " << ms.getMin() << std::endl; // 2

    return 0;
}
