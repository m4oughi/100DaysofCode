#include <iostream>
#include <stack>
#include <list>

int main() {
    std::stack<int, std::list<int>> s; // Using list instead of deque

    s.push(100);
    s.push(200);
    s.push(300);

    std::cout << "Top element: " << s.top() << std::endl; // 300

    return 0;
}
