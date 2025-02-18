#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;
    s.push(5);
    s.push(10);
    s.push(15);

    std::cout << "Initial top: " << s.top() << std::endl; // 15
    s.pop();
    std::cout << "New top after pop: " << s.top() << std::endl; // 10

    return 0;
}
