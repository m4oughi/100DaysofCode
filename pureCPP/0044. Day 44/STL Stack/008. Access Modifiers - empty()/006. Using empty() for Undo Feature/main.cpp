#include <iostream>
#include <stack>

int main() {
    std::stack<std::string> actions;

    actions.push("Open File");
    actions.push("Edit Text");
    actions.push("Save File");

    std::cout << "Undoing actions:\n";
    while (!actions.empty()) {
        std::cout << "Undo: " << actions.top() << std::endl;
        actions.pop();
    }

    std::cout << "No more actions to undo!" << std::endl;

    return 0;
}
