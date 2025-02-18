#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "Before pop, top element: " << s.top() << std::endl; // 30
    s.pop();
    std::cout << "After pop, top element: " << s.top() << std::endl;  // 20

    return 0;
}
