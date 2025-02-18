#include <iostream>
#include <stack>

int main() {
    std::stack<std::string> history;

    history.push("Homepage");
    history.push("Page 1");
    history.push("Page 2");

    std::cout << "Current page: " << history.top() << std::endl;
    history.pop();
    std::cout << "After going back, current page: " << history.top() << std::endl;

    return 0;
}
