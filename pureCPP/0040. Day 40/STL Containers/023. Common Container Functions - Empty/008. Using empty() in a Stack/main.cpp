#include <iostream>
#include <stack>

int main() {
    std::stack<int> myStack;

    // Check if the stack is empty
    if (myStack.empty()) {
        std::cout << "Stack is empty." << std::endl;  // Output: Stack is empty.
    }

    // Pushing elements onto the stack
    myStack.push(1);
    myStack.push(2);

    // Check again after adding elements
    if (!myStack.empty()) {
        std::cout << "Stack is not empty." << std::endl;  // Output: Stack is not empty.
    }

    return 0;
}
