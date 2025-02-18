#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "Stack top element: " << s.top() << std::endl; // 30

    return 0;
}
