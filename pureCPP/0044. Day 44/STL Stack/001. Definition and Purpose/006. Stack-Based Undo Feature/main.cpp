#include <iostream>
#include <stack>

int main() {
    std::stack<std::string> history;

    history.push("Page 1");
    history.push("Page 2");
    history.push("Page 3");

    std::cout << "Current page: " << history.top() << std::endl;

    history.pop();
    std::cout << "After undo, current page: " << history.top() << std::endl;

    return 0;
}
