#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.empty()) {
        std::cout << "Popping: " << s.top() << std::endl;
        s.pop();
    }

    std::cout << "Stack is now empty!" << std::endl;

    return 0;
}
