#include <iostream>
#include <stack>
#include <deque>

int main() {
    std::stack<int, std::deque<int>> s;
    s.push(10);
    s.push(20);

    while (!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }
    return 0;
}
