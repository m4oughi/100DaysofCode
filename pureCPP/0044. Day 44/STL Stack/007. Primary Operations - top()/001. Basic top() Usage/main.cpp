#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "Top element: " << s.top() << std::endl; // Output: 30

    return 0;
}
