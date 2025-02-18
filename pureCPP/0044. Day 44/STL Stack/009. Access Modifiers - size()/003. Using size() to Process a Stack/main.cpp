#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    while (s.size() > 0) {
        std::cout << "Popping element: " << s.top() << ", Stack size: " << s.size() << std::endl;
        s.pop();
    }

    std::cout << "Stack is empty now." << std::endl;
    return 0;
}
