#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;

    std::cout << "Size of stack: " << s.size() << std::endl;

    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "Size after pushing elements: " << s.size() << std::endl;

    return 0;
}
