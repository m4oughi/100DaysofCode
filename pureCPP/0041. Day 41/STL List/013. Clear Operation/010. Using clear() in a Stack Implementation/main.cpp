#include <iostream>
#include <list>

class Stack {
private:
    std::list<int> stack;

public:
    void push(int value) {
        stack.push_back(value);
    }

    void pop() {
        if (!stack.empty()) {
            stack.pop_back();
        } else {
            std::cout << "Stack is empty.\n";
        }
    }

    void clearStack() {
        stack.clear();
        std::cout << "Stack cleared.\n";
    }

    void display() {
        for (int num : stack) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    s.display();
    s.clearStack();
    s.display(); // Should be empty

    return 0;
}
