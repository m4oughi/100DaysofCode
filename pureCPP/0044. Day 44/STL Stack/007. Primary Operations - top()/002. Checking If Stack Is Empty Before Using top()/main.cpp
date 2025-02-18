#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;

    if (!s.empty()) {
        std::cout << "Top element: " << s.top() << std::endl;
    } else {
        std::cout << "Stack is empty, no top element!" << std::endl;
    }

    return 0;
}
