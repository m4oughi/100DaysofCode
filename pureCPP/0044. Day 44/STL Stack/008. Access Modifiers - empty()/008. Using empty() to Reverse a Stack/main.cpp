#include <iostream>
#include <stack>

int main() {
    std::stack<int> s, reversed;

    s.push(1);
    s.push(2);
    s.push(3);

    while (!s.empty()) {
        reversed.push(s.top());
        s.pop();
    }

    std::cout << "Reversed Stack: ";
    while (!reversed.empty()) {
        std::cout << reversed.top() << " ";
        reversed.pop();
    }

    return 0;
}
