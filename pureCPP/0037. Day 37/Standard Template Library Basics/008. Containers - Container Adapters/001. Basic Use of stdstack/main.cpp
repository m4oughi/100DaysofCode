#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    while (!s.empty()) {
        std::cout << s.top() << " "; // Outputs the top element
        s.pop();                     // Removes the top element
    }
    return 0;
}
