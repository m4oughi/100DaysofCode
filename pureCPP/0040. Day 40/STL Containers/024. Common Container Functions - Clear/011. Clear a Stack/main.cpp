#include <iostream>
#include <stack>

int main() {
    std::stack<int> myStack;
    myStack.push(1);
    myStack.push(2);

    std::cout << "Before clearing, size: " << myStack.size() << std::endl;

    // Empty the stack by popping all elements
    while (!myStack.empty()) {
        myStack.pop();
    }

    std::cout << "After clearing, size: " << myStack.size() << std::endl;  // Output: After clearing, size: 0

    return 0;
}
