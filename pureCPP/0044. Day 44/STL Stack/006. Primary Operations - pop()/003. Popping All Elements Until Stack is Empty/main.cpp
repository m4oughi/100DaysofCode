#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;

    s.push(100);
    s.push(200);
    s.push(300);

    std::cout << "Popping all elements: ";
    while (!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }
    std::cout << std::endl;

    return 0;
}
