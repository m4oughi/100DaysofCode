#include <iostream>
#include <stack>

int main() {
    std::stack<std::string> undoStack;
    undoStack.push("Type A");
    undoStack.push("Type B");
    undoStack.push("Type C");

    std::cout << "Undoing last action: " << undoStack.top() << std::endl;
    undoStack.pop();
    std::cout << "Undoing again: " << undoStack.top() << std::endl;

    return 0;
}
