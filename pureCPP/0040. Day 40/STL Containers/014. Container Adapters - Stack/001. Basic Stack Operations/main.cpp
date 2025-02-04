#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;
    
    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "Top element: " << s.top() << "\n"; // 30

    s.pop(); // Remove 30

    std::cout << "New top element: " << s.top() << "\n"; // 20

    return 0;
}
