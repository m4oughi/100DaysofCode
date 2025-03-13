#include <iostream>
#include <stack>
#include <utility>

class CustomStack {
    std::stack<int> stk;
public:
    void push(int val) {
        stk.push(val);
    }

    int pop() {
        if (stk.empty()) throw std::runtime_error("Stack is empty!");
        return std::exchange(stk.top(), 0); // Return old value and reset top element
    }
};

int main() {
    CustomStack s;
    s.push(10);
    s.push(20);

    std::cout << "Popped: " << s.pop() << "\n";
    return 0;
}
