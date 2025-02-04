#include <iostream>
#include <stack>

int main() {
    std::stack<int> stack1, stack2;
    
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);

    stack2.push(10);
    stack2.push(20);

    stack1.swap(stack2);

    std::cout << "Top of stack1: " << stack1.top() << "\n"; // 20
    std::cout << "Top of stack2: " << stack2.top() << "\n"; // 3

    return 0;
}
