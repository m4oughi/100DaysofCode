#include <iostream>
#include <stack>

class MaxStack {
    std::stack<int> s, maxStack;

public:
    void push(int x) {
        s.push(x);
        if (maxStack.empty() || x >= maxStack.top()) {
            maxStack.push(x);
        }
    }

    void pop() {
        if (s.top() == maxStack.top()) {
            maxStack.pop();
        }
        s.pop();
    }

    int top() {
        return s.top();
    }

    int getMax() {
        return maxStack.top();
    }
};

int main() {
    MaxStack ms;
    ms.push(5);
    ms.push(10);
    ms.push(3);

    std::cout << "Max: " << ms.getMax() << std::endl; // 10

    ms.pop();
    std::cout << "Max after pop: " << ms.getMax() << std::endl; // 10

    return 0;
}
