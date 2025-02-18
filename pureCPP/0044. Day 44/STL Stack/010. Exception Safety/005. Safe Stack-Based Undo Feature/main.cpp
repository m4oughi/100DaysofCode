#include <iostream>
#include <stack>
#include <stdexcept>

void undoLastAction(std::stack<std::string>& actions) {
    if (actions.empty()) {
        throw std::runtime_error("No actions to undo!");
    }
    actions.pop();
}

int main() {
    std::stack<std::string> actions;
    actions.push("Open File");
    actions.push("Edit Text");

    try {
        undoLastAction(actions);
        undoLastAction(actions);
        undoLastAction(actions); // This will throw an exception
    } catch (const std::runtime_error& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
