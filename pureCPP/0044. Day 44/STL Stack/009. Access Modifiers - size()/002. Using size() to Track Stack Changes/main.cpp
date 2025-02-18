#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;
    s.push(5);
    s.push(15);
    s.push(25);

    std::cout << "Initial size: " << s.size() << std::endl;

    s.pop();
    std::cout << "Size after popping an element: " << s.size() << std::endl;

    return 0;
}
