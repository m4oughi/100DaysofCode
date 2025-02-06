#include <iostream>
#include <list>

class Stack {
private:
    std::list<int> data;

public:
    void push(int value) {
        data.push_back(value);
    }

    void pop() {
        if (!data.empty()) data.pop_back();
    }

    void swapStack(Stack& other) {
        data.swap(other.data);
    }

    void display() {
        for (int num : data) std::cout << num << " ";
        std::cout << std::endl;
    }
};

int main() {
    Stack stack1, stack2;
    stack1.push(10);
    stack1.push(20);
    stack2.push(100);
    stack2.push(200);

    stack1.swapStack(stack2);

    std::cout << "Stack 1 after swap: "; stack1.display();
    std::cout << "Stack 2 after swap: "; stack2.display();

    return 0;
}
