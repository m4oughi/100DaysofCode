#include <iostream>
#include <stack>
#include <stdexcept>

class SafeStack {
private:
    std::stack<int> s;
public:
    void push(int x) { s.push(x); }

    void pop() {
        if (s.empty()) {
            throw std::runtime_error("Cannot pop from an empty stack!");
        }
        s.pop();
    }

    int top() {
        if (s.empty()) {
            throw std::runtime_error("Cannot access top of an empty stack!");
        }
        return s.top();
    }
};

int main() {
    SafeStack ss;

    try {
        ss.pop();
    } catch (const std::runtime_error& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
