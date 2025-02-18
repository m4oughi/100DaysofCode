#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "Stack elements (popping in LIFO order): ";
    while (!s.empty()) {
        std::cout << s.top() << " "; // Access top element
        s.pop(); // Remove top element
    }
    return 0;
}
